(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)
(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
(setq column-number-mode t)
(when (version<= "26.0.50" emacs-version )
  (global-display-line-numbers-mode))
(linum-mode)
