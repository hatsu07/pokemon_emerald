	@ data/text/apprentice.inc:424 gText_ApprenticeHoldNothing12
	.globl gText_Rom_26FB96
gText_Rom_26FB96: @ 0x0826FB96
	.string "エェ!? じゃあ {STR_VAR_1}には\nなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_Rom_26FB96) > 0x23
	.error "gText_Rom_26FB96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FB96) < 0x23
	.space 0x23 - (. - gText_Rom_26FB96)
	.endif
