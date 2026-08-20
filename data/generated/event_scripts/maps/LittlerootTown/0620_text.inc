	@ data/maps/LittlerootTown/scripts.inc:989 LittlerootTown_Text_YouSavedBirch
	.globl gText_Rom_1E4671
gText_Rom_1E4671: @ 0x081E4671
	.string "{STR_VAR_1}の おかげで\nはかせ たすかった! よかったー{EOS}"
	.if (. - gText_Rom_1E4671) > 0x1a
	.error "gText_Rom_1E4671 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4671) < 0x1a
	.space 0x1a - (. - gText_Rom_1E4671)
	.endif
