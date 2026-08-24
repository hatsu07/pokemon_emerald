	@ src/strings.c:766 gText_SpaceTimes2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SpaceTimes2
gText_SpaceTimes2: @ 0x085CC9D9
	.string "   かい{EOS}"
	.if (. - gText_SpaceTimes2) != 0x6
	.error "gText_SpaceTimes2 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC9DB
	.set gText_Rom_5CC9DB, gText_SpaceTimes2 + 0x2
	@ ANALYSIS: RAW_RANGE offset=0x5CC9DF, size=0x7
	.byte 0x00, 0xFD, 0x02, 0xB8, 0xFD, 0x03, 0xFF

	@ src/strings.c:768 gText_Var1Berry
	.globl gText_Var1Berry
gText_Var1Berry: @ 0x085CC9E6
	.string "  {STR_VAR_1}のみ{EOS}"
	.if (. - gText_Var1Berry) > 0x7
	.error "gText_Var1Berry may not grow beyond its original slot"
	.endif
	.if (. - gText_Var1Berry) < 0x7
	.space 0x7 - (. - gText_Var1Berry)
	.endif

	@ src/strings.c:769 gText_TimeColon
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_TimeColon
gText_TimeColon: @ 0x085CC9ED
	.string "   じかん{EOS}"
	.if (. - gText_TimeColon) != 0x7
	.error "gText_TimeColon must retain its original byte length"
	.endif
