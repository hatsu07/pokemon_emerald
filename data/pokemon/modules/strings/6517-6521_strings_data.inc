	@ src/strings.c:855 gText_2nd
	.globl gText_2nd
gText_2nd: @ 0x085CCEBC
	.string "2い{EOS}"
	.if (. - gText_2nd) > 0x3
	.error "gText_2nd may not grow beyond its original slot"
	.endif
	.if (. - gText_2nd) < 0x3
	.space 0x3 - (. - gText_2nd)
	.endif

	@ src/strings.c:856 gText_3rd
	.globl gText_3rd
gText_3rd: @ 0x085CCEBF
	.string "3い{EOS}"
	.if (. - gText_3rd) > 0x3
	.error "gText_3rd may not grow beyond its original slot"
	.endif
	.if (. - gText_3rd) < 0x3
	.space 0x3 - (. - gText_3rd)
	.endif

	@ src/strings.c:857 gText_4th
	.globl gText_4th
gText_4th: @ 0x085CCEC2
	.string "4い{EOS}"
	.if (. - gText_4th) > 0x3
	.error "gText_4th may not grow beyond its original slot"
	.endif
	.if (. - gText_4th) < 0x3
	.space 0x3 - (. - gText_4th)
	.endif
