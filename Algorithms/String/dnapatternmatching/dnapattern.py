from collections import defaultdict
import re as r
dnapattern={
  'ATAACCGTACATACGAT':'Shrikant padhy',
  'ATCCCGATGCTACATGG':'Shreyash iyyer',
  'GTACCGATGGATTTCGA':'Shayantan Santra',
  'CTACGATCGATATGCAT':'manthan Raut',
  'ATTACCGATCATCGATA':'Alwar Goswami',
  'ATGCATTATGATCGAAT':'Kagiso Rabada',
  'ATCGATTATGATGGACT':'Mayank Tripathi',
  'ATCCGATATCATCTAGC':'Pranay Solse',
  'ATGAGCTATCATCTAGC':'Akilesh Salunkhe',
  'ATACGGTATCCCGTATA':'Akshay Pawar',
  }
dnacount=defaultdict(list)
diseased=input("Enter the most Common pattern found in diseased person")
for j in dnapattern.keys():
  ls=[x.start() for x in r.finditer('('+'?'+'='+diseased+')',j)]
  dnacount[len(ls)]+=[dnapattern[j]]    
find=dnacount.get(max(dnacount.keys()),False)
if(find==False or max(dnacount.keys())==0):
  print("Dna Pattern Unmatched")
else:
  print("Dna pattern is more similar to the relative named:{}".format(find))
