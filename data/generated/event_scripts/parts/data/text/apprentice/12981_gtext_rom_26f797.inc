	@ data/text/apprentice.inc:388 gText_ApprenticeItemAlreadyRecommended9
	.globl gText_Rom_26F797
gText_Rom_26F797: @ 0x0826F797
	.string "ノンノン! {STR_VAR_1}は\nまえに おしえて もらったよ!\pお それとも もしや\n{STR_VAR_2}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_Rom_26F797) > 0x46
	.error "gText_Rom_26F797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F797) < 0x46
	.space 0x46 - (. - gText_Rom_26F797)
	.endif
