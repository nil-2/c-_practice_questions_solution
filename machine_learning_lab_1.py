import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
#%matplotlib inline
from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler
from sklearn.datasets import load_breast_cancer
data = load_breast_cancer()
data.keys()

print(data['target_names'])
print(data['feature_names'])
df1 = pd.DataFrame(data['data'],columns=data['feature_names'])
scaling = StandardScaler()
scaling.fit(df1)
scaled_data = scaling.transform(df1)
principal = PCA(n_components=3)
principal.fit(scaled_data)
x=principal.transform(scaled_data)
print(x.shape)
principal.components_
plt.figure(figsize=(10,10))
plt.scatter(x[:,0],x[:,1],c=data['target'],cmap='plasma')
plt.xlabel('pc1')
plt.ylabel('pc2')
from mpl_toolkits.mplot3d import Axes3D
fig = plt.figure(figsize=(10,10))

axis = fig.add_subplot(111,projection='3d')
axis.scatter(x[:,0],x[:,1],x[:,2],c=data['target'],cmap='plasma')
axis.set_xlabel('pc1',fontsize=10)
axis.set_ylabel('pc2',fontsize=10)
axis.set_zlabel('pc3',fontsize=10)


