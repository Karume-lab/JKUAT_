"""
series
dataframe
UCI datasets

header?
read_csv
read_excel
read data from sql
.head()
.tail()
.sample()
"""

import pandas as pd
import matplotlib.pyplot as plt


df = pd.read_csv("./data/data.csv")
df.plot(kind="scatter", x="Duration", y="Calories")

plt.show()
