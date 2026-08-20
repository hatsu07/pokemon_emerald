	@ data/text/trainers.inc:1388 Route114_Text_TyraPostBattle
	.globl gText_Rom_25CF3C
gText_Rom_25CF3C: @ 0x0825CF3C
	.string "カヨ『コウハイの イヨに あたしが\nポケモンを おしえて あげたの!{EOS}"
	.if (. - gText_Rom_25CF3C) > 0x23
	.error "gText_Rom_25CF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CF3C) < 0x23
	.space 0x23 - (. - gText_Rom_25CF3C)
	.endif
