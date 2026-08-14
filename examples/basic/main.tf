terraform {
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "99.99.99"
    }
  }
}

provider "aws" {
  region = "us-east-1"
}
