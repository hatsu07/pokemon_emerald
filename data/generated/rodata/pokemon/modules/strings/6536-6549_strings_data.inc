	@ src/strings.c:866 gJPText_LinkIsIncorrect
	.globl gText_Rom_5CCF72
gText_Rom_5CCF72: @ 0x085CCF72
	.string "せつぞくが まちがっています$"
	.if (. - gText_Rom_5CCF72) > 0xf
	.error "gText_Rom_5CCF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF72) < 0xf
	.space 0xf - (. - gText_Rom_5CCF72)
	.endif

	@ src/strings.c:867 gJPText_CardReadingHasBeenHalted
	.globl gText_Rom_5CCF81
gText_Rom_5CCF81: @ 0x085CCF81
	.string "カードの よみこみを\nちゅうし しました$"
	.if (. - gText_Rom_5CCF81) > 0x15
	.error "gText_Rom_5CCF81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCF81) < 0x15
	.space 0x15 - (. - gText_Rom_5CCF81)
	.endif

	@ src/strings.c:868 gJPText_UnableConnectWithEReader
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCF96
gText_Rom_5CCF96: @ 0x085CCF96
	.string "カードeリーダー{PLUS}と\nつうしん できません$"
	.if (. - gText_Rom_5CCF96) != 0x17
	.error "gText_Rom_5CCF96 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCFA9
	.set gText_Rom_5CCFA9, gText_Rom_5CCF96 + 0x13

	@ src/strings.c:869 gJPText_Connecting
	.globl gText_Rom_5CCFAD
gText_Rom_5CCFAD: @ 0x085CCFAD
	.string "つうしん ちゅう です$"
	.if (. - gText_Rom_5CCFAD) > 0xc
	.error "gText_Rom_5CCFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFAD) < 0xc
	.space 0xc - (. - gText_Rom_5CCFAD)
	.endif

	@ src/strings.c:870 gJPText_ConnectionErrorCheckLink
	.globl gText_Rom_5CCFB9
gText_Rom_5CCFB9: @ 0x085CCFB9
	.string "つうしん エラーです\nせつぞくを たしかめて ください$"
	.if (. - gText_Rom_5CCFB9) > 0x1c
	.error "gText_Rom_5CCFB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFB9) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCFB9)
	.endif

	@ src/strings.c:871 gJPText_ConnectionErrorTryAgain
	.globl gText_Rom_5CCFD5
gText_Rom_5CCFD5: @ 0x085CCFD5
	.string "つうしん エラーです\nはじめから やりなおして ください$"
	.if (. - gText_Rom_5CCFD5) > 0x1d
	.error "gText_Rom_5CCFD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFD5) < 0x1d
	.space 0x1d - (. - gText_Rom_5CCFD5)
	.endif

	@ src/strings.c:872 gJPText_AllowEReaderToLoadCard
	.globl gText_Rom_5CCFF2
gText_Rom_5CCFF2: @ 0x085CCFF2
	.string "カードeリーダー{PLUS} に\nカードを よみこませて ください$"
	.if (. - gText_Rom_5CCFF2) > 0x1e
	.error "gText_Rom_5CCFF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFF2) < 0x1e
	.space 0x1e - (. - gText_Rom_5CCFF2)
	.endif
