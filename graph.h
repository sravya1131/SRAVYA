import matplotlib.pyplot as plt
import numpy as np 
CSE={"c1":55 , "c2":62 , "c3":98}
batch=list(CSE.keys())
passpercentage=list(CSE.values())
fig=plt.figure(figsize=(10,6))
plt.barh(y=batch , width=passpercentage,
        colors=["blue" ,"pink" , "red"],
     
        edgrcolor="black",
        tick_label=["c1","c2","c3"],

        )
        plt.ylabel(Batch)
        plt.xlabel(passpercentage)
        plt.title("CSE")
        plt.show()
