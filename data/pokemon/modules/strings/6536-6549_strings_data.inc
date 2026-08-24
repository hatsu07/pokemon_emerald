	.globl gJPText_LinkIsIncorrect

	@ src/strings.c:866 gJPText_LinkIsIncorrect
	.globl gJPText_LinkIsIncorrect
gJPText_LinkIsIncorrect: @ 0x085CCF72
	.string "せつぞくが まちがっています{EOS}"
	.if (. - gJPText_LinkIsIncorrect) > 0xf
	.error "gJPText_LinkIsIncorrect may not grow beyond its original slot"
	.endif
	.if (. - gJPText_LinkIsIncorrect) < 0xf
	.space 0xf - (. - gJPText_LinkIsIncorrect)
	.endif

	@ src/strings.c:867 gJPText_CardReadingHasBeenHalted
	.globl gJPText_CardReadingHasBeenHalted
gJPText_CardReadingHasBeenHalted: @ 0x085CCF81
	.string "カードの よみこみを\nちゅうし しました{EOS}"
	.if (. - gJPText_CardReadingHasBeenHalted) > 0x15
	.error "gJPText_CardReadingHasBeenHalted may not grow beyond its original slot"
	.endif
	.if (. - gJPText_CardReadingHasBeenHalted) < 0x15
	.space 0x15 - (. - gJPText_CardReadingHasBeenHalted)
	.endif

	@ src/strings.c:868 gJPText_UnableConnectWithEReader
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_UnableConnectWithEReader
gJPText_UnableConnectWithEReader: @ 0x085CCF96
	.string "カードeリーダー{PLUS}と\nつうしん できません{EOS}"
	.if (. - gJPText_UnableConnectWithEReader) != 0x17
	.error "gJPText_UnableConnectWithEReader must retain its original byte length"
	.endif

	@ src/strings.c:869 gJPText_Connecting
	.globl gJPText_Connecting
gJPText_Connecting: @ 0x085CCFAD
	.string "つうしん ちゅう です{EOS}"
	.if (. - gJPText_Connecting) > 0xc
	.error "gJPText_Connecting may not grow beyond its original slot"
	.endif
	.if (. - gJPText_Connecting) < 0xc
	.space 0xc - (. - gJPText_Connecting)
	.endif

	@ src/strings.c:870 gJPText_ConnectionErrorCheckLink
	.globl gJPText_ConnectionErrorCheckLink
gJPText_ConnectionErrorCheckLink: @ 0x085CCFB9
	.string "つうしん エラーです\nせつぞくを たしかめて ください{EOS}"
	.if (. - gJPText_ConnectionErrorCheckLink) > 0x1c
	.error "gJPText_ConnectionErrorCheckLink may not grow beyond its original slot"
	.endif
	.if (. - gJPText_ConnectionErrorCheckLink) < 0x1c
	.space 0x1c - (. - gJPText_ConnectionErrorCheckLink)
	.endif

	@ src/strings.c:871 gJPText_ConnectionErrorTryAgain
	.globl gJPText_ConnectionErrorTryAgain
gJPText_ConnectionErrorTryAgain: @ 0x085CCFD5
	.string "つうしん エラーです\nはじめから やりなおして ください{EOS}"
	.if (. - gJPText_ConnectionErrorTryAgain) > 0x1d
	.error "gJPText_ConnectionErrorTryAgain may not grow beyond its original slot"
	.endif
	.if (. - gJPText_ConnectionErrorTryAgain) < 0x1d
	.space 0x1d - (. - gJPText_ConnectionErrorTryAgain)
	.endif

	@ src/strings.c:872 gJPText_AllowEReaderToLoadCard
	.globl gJPText_AllowEReaderToLoadCard
gJPText_AllowEReaderToLoadCard: @ 0x085CCFF2
	.string "カードeリーダー{PLUS} に\nカードを よみこませて ください{EOS}"
	.if (. - gJPText_AllowEReaderToLoadCard) > 0x1e
	.error "gJPText_AllowEReaderToLoadCard may not grow beyond its original slot"
	.endif
	.if (. - gJPText_AllowEReaderToLoadCard) < 0x1e
	.space 0x1e - (. - gJPText_AllowEReaderToLoadCard)
	.endif
