
	@ src/data/credits.h:120 sCreditsText_HironobuYoshida
	.globl gText_Rom_5C6EE6
gText_Rom_5C6EE6: @ 0x085C6EE6
	.string "よしだ ひろのぶ$"
	.if (. - gText_Rom_5C6EE6) > 0x9
	.error "gText_Rom_5C6EE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EE6) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EE6)
	.endif

	@ src/data/credits.h:121 sCreditsText_MotofumiFujiwara
	.globl gText_Rom_5C6EEF
gText_Rom_5C6EEF: @ 0x085C6EEF
	.string "ふじわら もとふみ$"
	.if (. - gText_Rom_5C6EEF) > 0xa
	.error "gText_Rom_5C6EEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EEF) < 0xa
	.space 0xa - (. - gText_Rom_5C6EEF)
	.endif

	@ src/data/credits.h:122 sCreditsText_SatoshiOhta
	.globl gText_Rom_5C6EF9
gText_Rom_5C6EF9: @ 0x085C6EF9
	.string "おおた さとし$"
	.if (. - gText_Rom_5C6EF9) > 0x8
	.error "gText_Rom_5C6EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EF9) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EF9)
	.endif

	@ src/data/credits.h:123 sCreditsText_AsukaIwashita
	.globl gText_Rom_5C6F01
gText_Rom_5C6F01: @ 0x085C6F01
	.string "いわした あすか$"
	.if (. - gText_Rom_5C6F01) > 0x9
	.error "gText_Rom_5C6F01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F01) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F01)
	.endif

	@ src/data/credits.h:124 sCreditsText_AimiTomita
	.globl gText_Rom_5C6F0A
gText_Rom_5C6F0A: @ 0x085C6F0A
	.string "とみた あいみ$"
	.if (. - gText_Rom_5C6F0A) > 0x8
	.error "gText_Rom_5C6F0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F0A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F0A)
	.endif

	@ src/data/credits.h:125 sCreditsText_TakaoUnno
	.globl gText_Rom_5C6F12
gText_Rom_5C6F12: @ 0x085C6F12
	.string "うんの たかお$"
	.if (. - gText_Rom_5C6F12) > 0x8
	.error "gText_Rom_5C6F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F12) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F12)
	.endif

	@ src/data/credits.h:126 sCreditsText_KanakoEo
	.globl gText_Rom_5C6F1A
gText_Rom_5C6F1A: @ 0x085C6F1A
	.string "えお かなこ$"
	.if (. - gText_Rom_5C6F1A) > 0x7
	.error "gText_Rom_5C6F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F1A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6F1A)
	.endif

	@ src/data/credits.h:127 sCreditsText_JunOkutani
	.globl gText_Rom_5C6F21
gText_Rom_5C6F21: @ 0x085C6F21
	.string "おくたに じゅん$"
	.if (. - gText_Rom_5C6F21) > 0x9
	.error "gText_Rom_5C6F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F21) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F21)
	.endif

	@ src/data/credits.h:128 sCreditsText_AtsukoNishida
	.globl gText_Rom_5C6F2A
gText_Rom_5C6F2A: @ 0x085C6F2A
	.string "にしだ あつこ$"
	.if (. - gText_Rom_5C6F2A) > 0x8
	.error "gText_Rom_5C6F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F2A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F2A)
	.endif

	@ src/data/credits.h:129 sCreditsText_MuneoSaito
	.globl gText_Rom_5C6F32
gText_Rom_5C6F32: @ 0x085C6F32
	.string "さいとう むねお$"
	.if (. - gText_Rom_5C6F32) > 0x9
	.error "gText_Rom_5C6F32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F32) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F32)
	.endif

	@ src/data/credits.h:130 sCreditsText_RenaYoshikawa
	.globl gText_Rom_5C6F3B
gText_Rom_5C6F3B: @ 0x085C6F3B
	.string "よしかわ れな$"
	.if (. - gText_Rom_5C6F3B) > 0x8
	.error "gText_Rom_5C6F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F3B) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F3B)
	.endif

	@ src/data/credits.h:131 sCreditsText_GoIchinose
	.globl gText_Rom_5C6F43
gText_Rom_5C6F43: @ 0x085C6F43
	.string "いちのせ ごう$"
	.if (. - gText_Rom_5C6F43) > 0x8
	.error "gText_Rom_5C6F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F43) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F43)
	.endif

	@ src/data/credits.h:132 sCreditsText_MorikazuAoki
	.globl gText_Rom_5C6F4B
gText_Rom_5C6F4B: @ 0x085C6F4B
	.string "あおき もりかず$"
	.if (. - gText_Rom_5C6F4B) > 0x9
	.error "gText_Rom_5C6F4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F4B) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F4B)
	.endif

	@ src/data/credits.h:133 sCreditsText_KojiNishino
	.globl gText_Rom_5C6F54
gText_Rom_5C6F54: @ 0x085C6F54
	.string "にしの こうじ$"
	.if (. - gText_Rom_5C6F54) > 0x8
	.error "gText_Rom_5C6F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F54) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F54)
	.endif

	@ src/data/credits.h:134 sCreditsText_KenjiMatsushima
	.globl gText_Rom_5C6F5C
gText_Rom_5C6F5C: @ 0x085C6F5C
	.string "まつしま けんじ$"
	.if (. - gText_Rom_5C6F5C) > 0x9
	.error "gText_Rom_5C6F5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F5C) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F5C)
	.endif

	@ src/data/credits.h:135 sCreditsText_TetsujiOhta
	.globl gText_Rom_5C6F65
gText_Rom_5C6F65: @ 0x085C6F65
	.string "おおた てつじ$"
	.if (. - gText_Rom_5C6F65) > 0x8
	.error "gText_Rom_5C6F65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F65) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F65)
	.endif
