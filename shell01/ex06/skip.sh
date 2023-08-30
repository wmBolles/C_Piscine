#!/bin/bash
ls -l | awk 'RN%2==1'
