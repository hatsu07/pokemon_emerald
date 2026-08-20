	@ data/maps/MtChimney/scripts.inc:652 MtChimney_Text_AquasNameSimilar
	.globl gText_Rom_215498
gText_Rom_215498: @ 0x08215498
	.string "オレたちは マグマだん!\pやつらは アクアだん!\pにたような なまえを つけやがって\nいまいましい やつらだ!{EOS}"
	.if (. - gText_Rom_215498) > 0x38
	.error "gText_Rom_215498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215498) < 0x38
	.space 0x38 - (. - gText_Rom_215498)
	.endif
