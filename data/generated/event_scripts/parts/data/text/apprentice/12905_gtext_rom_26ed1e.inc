	@ data/text/apprentice.inc:274 gText_ApprenticeHoldNothing2
	.globl gText_Rom_26ED1E
gText_Rom_26ED1E: @ 0x0826ED1E
	.string "じゃあ {STR_VAR_1}には\nなにも もたせなくても いいんだね?"
	.byte EOS
	.if (. - gText_Rom_26ED1E) > 0x1c
	.error "gText_Rom_26ED1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED1E) < 0x1c
	.space 0x1c - (. - gText_Rom_26ED1E)
	.endif
