(TeX-add-style-hook
 "TimeManagement"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("fontenc" "T1")))
   (TeX-run-style-hooks
    "latex2e"
    "article"
    "art10"
    "indentfirst"
    "inconsolata"
    "fontenc")
   (LaTeX-add-labels
    "fmt_specs"))
 :latex)

