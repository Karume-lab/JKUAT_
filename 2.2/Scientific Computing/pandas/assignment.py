"""
get a subset
download it
follow w3schools
https://www.w3schools.com/python/pandas/pandas_analyzing.asp


read the data and plot it
"""

"""
Scatter Plots:

    MajorAxisLength vs. MinorAxisLength: Explore the relationship between major and minor axis lengths.
    Area vs. Perimeter: Visualize how area and perimeter are distributed.
    Eccentricity vs. AspectRatio: Examine the eccentricity in relation to the aspect ratio.

Histograms:

    Distribution of Area, Perimeter, MajorAxisLength, MinorAxisLength, etc.
    Class distribution: Show the number of samples for each class.

Box Plots:

    Compare the statistical distribution of various features across different classes.

Correlation Heatmap:

    Explore correlations between different features in the dataset.

Pie Chart or Bar Chart:

    Display the distribution of classes in the dataset.
"""

import pandas as pd
from matplotlib import pyplot as plt

df_excel = pd.read_excel("./data/DryBeanDataset/Dry_Bean_Dataset.xlsx")
df_excel.plot(kind="scatter", x="MajorAxisLength", y="MinorAxisLength")
# plt.savefig("./images/bar1")
df_excel.plot(kind="bar", x="Area", y="Perimeter")
# plt.savefig("./images/scatter_plot-area_perimeter")

df_csv = pd.read_csv("./data/bc/wdbc.data")
df_csv.plot(kind="scatter", x="area1", y="perimeter1")
# plt.savefig("./images/scatter_plot-area1_perimeter1")
df_csv.plot(kind="bar", x="perimeter1", y="area1")
# plt.savefig("./images/bar2")
plt.show()
