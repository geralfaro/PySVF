#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "special_funcs.h"

// These are "wrapper functions" that you will call from Python
// Takes python input, changes into C variables and calls the respective C function
static PyObject *
svf_log(PyObject *self, PyObject *args)
{
    double input_value;

    if (!PyArg_ParseTuple(args, "d", &input_value))
        return NULL;
    double log_result = log_original_c(input_value);

    return Py_BuildValue("f", log_result);
}

// Have one wrapper function for each function you want to expose in Python
static PyObject *
svf_sin(PyObject *self, PyObject *args)
{
    double input_value;

    if (!PyArg_ParseTuple(args, "d", &input_value))
        return NULL;
    double sin_result = sin_original_c(input_value);

    return Py_BuildValue("f", sin_result);
}

// Define the "method table"
static PyMethodDef SVFMethods[] = {
    {"svf_log",  svf_log, METH_VARARGS,
     "Calculate the natural logarithm of a number."},
    {"svf_sin",  svf_sin, METH_VARARGS,
     "Calculate the sine of a number."},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

//Set the module definition structure
static struct PyModuleDef svfmodule = {
    PyModuleDef_HEAD_INIT,
    "svfmodule",   /* name of module */
    NULL,          /* module documentation, may be NULL */
    -1,            /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    SVFMethods
};

//Set the module’s initialization function
PyMODINIT_FUNC PyInit_svfmodule(void) {
  PyObject *m;
  m = PyModule_Create(&svfmodule);
  return m;
}
