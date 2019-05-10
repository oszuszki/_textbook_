
# TensorFlow Hello World 1!
# twicetwo.py
#
import tensorflow

node1 = tensorflow.constant(2)
node2 = tensorflow.constant(2)

node_twicetwo = tensorflow.mul(node1, node2, name="twicetwo")

sess = tensorflow.Session()
print sess.run(node_twicetwo)

writer = tensorflow.train.SummaryWriter("/tmp/twicetwo", sess.graph)
# nbatfai@robopsy:~/Robopsychology/repos/tensorflow/tensorflow/tensorboard$ python tensorboard.py --logdir=/tmp/twicetwo

tensorflow.train.write_graph(sess.graph_def, "models/", "twicetwo.pb", as_text=False)
# nbatfai@robopsy:~/Robopsychology/repos/tensorflow/tensorflow/twicetwo$ bazel build :twicetwo
# nbatfai@robopsy:~/Robopsychology/repos/tensorflow/bazel-bin/tensorflow/twicetwo$ cp -r ~/Robopsychology/repos/tensorflow/tensorflow/twicetwo/models .

