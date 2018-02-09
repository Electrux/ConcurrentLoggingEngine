(TeX-add-style-hook
 "LogFormat"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("FiraSans" "sfdefault") ("fontenc" "T1") ("geometry" "margin=0.5in")))
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperref")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperimage")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperbaseurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "nolinkurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "url")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "path")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "path")
   (TeX-run-style-hooks
    "latex2e"
    "article"
    "art10"
    "indentfirst"
    "csquotes"
    "graphicx"
    "hyperref"
    "nameref"
    "FiraSans"
    "fontenc"
    "geometry"
    "enumitem"))
 :latex)

