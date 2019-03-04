.. -*- rst -*-

Volume types (types)
====================


api-ref test
~~~~~~~~~~~~~~~~~~

.. rest_method::  PUT /v1/{param_path}

Updates a resource.

This is a test description for testing api-ref functionality developed by OpenStack

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200


Request
-------

.. rest_parameters:: parameters.yaml

   - param_path: param-path
   - param_body: param-body
   - param_header: param-header

Request Example
---------------

.. literalinclude:: ./samples/create-req.json
   :language: python



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - param_path: param-path
   - param_body: param-body
   - param_header: param-header

Response Example
----------------

.. literalinclude:: ./samples/create-rsp.json
   :language: python

