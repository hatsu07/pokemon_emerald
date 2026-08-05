	@ data/text/surf.inc:5 gText_PlayerUsedSurf
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_243CAE
gText_Rom_243CAE: @ 0x08243CAE
	.string "{STR_VAR_1}は\nなみのりを つかった!$"
	.if (. - gText_Rom_243CAE) != 0x10
	.error "gText_Rom_243CAE must retain its original byte length"
	.endif
