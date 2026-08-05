	@ data/maps/Route110/scripts.inc:951 Route110_Text_BestRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E9FC0
gText_Rom_1E9FC0: @ 0x081E9FC0
	.string "いままでの さいこう きろく……\pぶつかった かいすう\n …… {STR_VAR_1}!\pかかった タイム\n …… {STR_VAR_2}!$"
	.if (. - gText_Rom_1E9FC0) != 0x35
	.error "gText_Rom_1E9FC0 must retain its original byte length"
	.endif
