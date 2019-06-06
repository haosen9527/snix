# import the necessary packages
from sklearn.metrics import classification_report
from keras.datasets import cifar10
import autokeras as ak
import os
 
def main():
	# initialize the output directory
	OUTPUT_PATH = "output"
