from tabulate import tabulate
import pandas as pd
import matplotlib.pyplot as plt


def explore_dataframe(dataframe):
    """
    Print the head, tail, and summary statistics of a DataFrame.

    Parameters:
    - dataframe (pd.DataFrame): The DataFrame to explore.

    Returns:
    None
    """

    print("\nDataFrame Head:")
    print(dataframe.head())

    print("\nDataFrame Tail:")
    print(dataframe.tail())

    print("\nDataFrame Summary Statistics:")
    print(dataframe.describe())


def print_categorical_value_counts(dataframe):
    """
    Print value counts for categorical columns in a nicely formatted table.

    Parameters:
    - dataframe (pd.DataFrame): The DataFrame containing the data.
    - categorical_columns (list): List of column names with categorical data.

    Returns:
    None
    """
    categorical_columns = ["Model", "Scenarios"]
    for column in categorical_columns:
        table = tabulate(
            dataframe[column].value_counts().reset_index(),
            headers=["Value", "Count"],
            tablefmt="pretty",
        )
        print(f"\nValue Counts for {column}:\n{table}")


def plot_surface_temperature_over_time(dataframe):
    """
    Plot a line graph showing surface temperature over time.

    Parameters:
    - dataframe: Pandas DataFrame containing the dataset.

    Returns:
    - None
    """
    plt.figure(figsize=(10, 6))
    plt.plot(
        ["F2020", "F2025", "F2030", "F2035", "F2040", "F2045", "F2050"],
        dataframe.loc[0, "F2020":"F2050"],
        marker="o",
    )
    plt.title("Surface Temperature Over Time")
    plt.xlabel("Years")
    plt.ylabel("Surface Temperature (Degree Celsius)")
    plt.tight_layout()
    plt.savefig("./graphs/surface_temperature_over_time.png", bbox_inches="tight")
    plt.show()


def plot_scenario_comparison(dataframe):
    """
    Plot a bar chart comparing surface temperatures between scenarios.

    Parameters:
    - dataframe: Pandas DataFrame containing the dataset.

    Returns:
    - None
    """
    plt.figure(figsize=(12, 8))
    plt.bar(dataframe["Scenarios"], dataframe["F2050"])
    plt.title("Comparison Between Scenarios")
    plt.xlabel("Scenarios")
    plt.ylabel("Surface Temperature (Degree Celsius)")
    plt.xticks(rotation=45, ha="right")
    plt.tight_layout()
    plt.savefig("./graphs/scenario_comparison.png", bbox_inches="tight")
    plt.show()


def plot_model_comparison(dataframe):
    """
    Plot a line graph comparing surface temperatures between models.

    Parameters:
    - dataframe: Pandas DataFrame containing the dataset.

    Returns:
    - None
    """
    plt.figure(figsize=(12, 8))
    for model in dataframe["Model"].unique():
        model_data = dataframe[dataframe["Model"] == model]
        plt.plot(model_data["Scenarios"], model_data["F2050"], label=model, marker="o")
    plt.title("Model-wise Comparison")
    plt.xlabel("Scenarios")
    plt.ylabel("Surface Temperature (Degree Celsius)")
    plt.xticks(rotation=45, ha="right")
    plt.legend(title="Model", bbox_to_anchor=(1.05, 1), loc="upper left")
    plt.tight_layout()
    plt.savefig("./graphs/model_comparison.png", bbox_inches="tight")
    plt.show()


def plot_regional_variations(dataframe):
    """
    Plot a bar chart showing regional temperature variations.

    Parameters:
    - dataframe: Pandas DataFrame containing the dataset.

    Returns:
    - None
    """
    plt.figure(figsize=(15, 10))
    plt.bar(dataframe["Country"], dataframe["F2050"])
    plt.title("Regional Temperature Variations")
    plt.xlabel("Countries/Regions")
    plt.ylabel("Surface Temperature (Degree Celsius)")
    plt.xticks(rotation=45, ha="right")
    plt.tight_layout()
    plt.savefig("./graphs/regional_variations.png", bbox_inches="tight")
    plt.show()


def plot_time_series_for_scenarios(dataframe):
    """
    Plot time-series line graphs for specific scenarios.

    Parameters:
    - dataframe: Pandas DataFrame containing the dataset.

    Returns:
    - None
    """
    plt.figure(figsize=(10, 6))
    plt.plot(
        ["F2020", "F2025", "F2030", "F2035", "F2040", "F2045", "F2050"],
        dataframe.loc[0, "F2020":"F2050"],
        marker="o",
        label="Scenario: Below 2°C",
    )
    plt.plot(
        ["F2020", "F2025", "F2030", "F2035", "F2040", "F2045", "F2050"],
        dataframe.loc[1, "F2020":"F2050"],
        marker="o",
        label="Scenario: Current Policies",
    )
    plt.title("Time-Series for Specific Scenarios")
    plt.xlabel("Years")
    plt.ylabel("Surface Temperature (Degree Celsius)")
    plt.legend()
    plt.tight_layout()
    plt.savefig("./graphs/time_series_scenarios.png", bbox_inches="tight")
    plt.show()


def save_scatter_plot(dataframe):
    """
    Generate a scatter plot and save it to a specified path.

    Parameters:
    - dataframe: DataFrame containing the data
    - x_column: Name of the column to be used for the x-axis
    - y_column: Name of the column to be used for the y-axis
    - save_path: Path to save the scatter plot image (default: "./scatter_plot.png")
    """

    x_values = dataframe["F2050"]
    y_values = dataframe["F2030"]

    plt.figure(figsize=(10, 6))
    plt.scatter(x_values, y_values, marker="o", alpha=0.7)
    plt.title("Scatter Plot: F2050 vs F2030")
    plt.xlabel("F2050 (Degree Celsius)")
    plt.ylabel("F2030 (Degree Celsius)")
    plt.grid(True)

    plt.savefig("./graphs/scatter_plot_F2050_vs_F2030.png")
    plt.show()

