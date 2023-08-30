#!/bin/bash
id --groups --name $FT_USER |tr ' ' ',' | tr -d '\n'
