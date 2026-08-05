	@ data/text/trainers.inc:704 Route109_Text_ChandlerDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25B2BA
gText_Rom_25B2BA: @ 0x0825B2BA
	.string "あーあ! ざんねん$"
	.if (. - gText_Rom_25B2BA) != 0xa
	.error "gText_Rom_25B2BA must retain its original byte length"
	.endif
