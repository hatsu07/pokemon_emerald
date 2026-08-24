
	@ src/data/credits.h:120 sCreditsText_HironobuYoshida
	.globl sCreditsText_HironobuYoshida
sCreditsText_HironobuYoshida: @ 0x085C6EE6
	.string "よしだ ひろのぶ{EOS}"
	.if (. - sCreditsText_HironobuYoshida) > 0x9
	.error "sCreditsText_HironobuYoshida may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HironobuYoshida) < 0x9
	.space 0x9 - (. - sCreditsText_HironobuYoshida)
	.endif

	@ src/data/credits.h:121 sCreditsText_MotofumiFujiwara
	.globl sCreditsText_MotofumiFujiwara
sCreditsText_MotofumiFujiwara: @ 0x085C6EEF
	.string "ふじわら もとふみ{EOS}"
	.if (. - sCreditsText_MotofumiFujiwara) > 0xa
	.error "sCreditsText_MotofumiFujiwara may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MotofumiFujiwara) < 0xa
	.space 0xa - (. - sCreditsText_MotofumiFujiwara)
	.endif

	@ src/data/credits.h:122 sCreditsText_SatoshiOhta
	.globl sCreditsText_SatoshiOhta
sCreditsText_SatoshiOhta: @ 0x085C6EF9
	.string "おおた さとし{EOS}"
	.if (. - sCreditsText_SatoshiOhta) > 0x8
	.error "sCreditsText_SatoshiOhta may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SatoshiOhta) < 0x8
	.space 0x8 - (. - sCreditsText_SatoshiOhta)
	.endif

	@ src/data/credits.h:123 sCreditsText_AsukaIwashita
	.globl sCreditsText_AsukaIwashita
sCreditsText_AsukaIwashita: @ 0x085C6F01
	.string "いわした あすか{EOS}"
	.if (. - sCreditsText_AsukaIwashita) > 0x9
	.error "sCreditsText_AsukaIwashita may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AsukaIwashita) < 0x9
	.space 0x9 - (. - sCreditsText_AsukaIwashita)
	.endif

	@ src/data/credits.h:124 sCreditsText_AimiTomita
	.globl sCreditsText_AimiTomita
sCreditsText_AimiTomita: @ 0x085C6F0A
	.string "とみた あいみ{EOS}"
	.if (. - sCreditsText_AimiTomita) > 0x8
	.error "sCreditsText_AimiTomita may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AimiTomita) < 0x8
	.space 0x8 - (. - sCreditsText_AimiTomita)
	.endif

	@ src/data/credits.h:125 sCreditsText_TakaoUnno
	.globl sCreditsText_TakaoUnno
sCreditsText_TakaoUnno: @ 0x085C6F12
	.string "うんの たかお{EOS}"
	.if (. - sCreditsText_TakaoUnno) > 0x8
	.error "sCreditsText_TakaoUnno may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakaoUnno) < 0x8
	.space 0x8 - (. - sCreditsText_TakaoUnno)
	.endif

	@ src/data/credits.h:126 sCreditsText_KanakoEo
	.globl sCreditsText_KanakoEo
sCreditsText_KanakoEo: @ 0x085C6F1A
	.string "えお かなこ{EOS}"
	.if (. - sCreditsText_KanakoEo) > 0x7
	.error "sCreditsText_KanakoEo may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KanakoEo) < 0x7
	.space 0x7 - (. - sCreditsText_KanakoEo)
	.endif

	@ src/data/credits.h:127 sCreditsText_JunOkutani
	.globl sCreditsText_JunOkutani
sCreditsText_JunOkutani: @ 0x085C6F21
	.string "おくたに じゅん{EOS}"
	.if (. - sCreditsText_JunOkutani) > 0x9
	.error "sCreditsText_JunOkutani may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_JunOkutani) < 0x9
	.space 0x9 - (. - sCreditsText_JunOkutani)
	.endif

	@ src/data/credits.h:128 sCreditsText_AtsukoNishida
	.globl sCreditsText_AtsukoNishida
sCreditsText_AtsukoNishida: @ 0x085C6F2A
	.string "にしだ あつこ{EOS}"
	.if (. - sCreditsText_AtsukoNishida) > 0x8
	.error "sCreditsText_AtsukoNishida may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AtsukoNishida) < 0x8
	.space 0x8 - (. - sCreditsText_AtsukoNishida)
	.endif

	@ src/data/credits.h:129 sCreditsText_MuneoSaito
	.globl sCreditsText_MuneoSaito
sCreditsText_MuneoSaito: @ 0x085C6F32
	.string "さいとう むねお{EOS}"
	.if (. - sCreditsText_MuneoSaito) > 0x9
	.error "sCreditsText_MuneoSaito may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MuneoSaito) < 0x9
	.space 0x9 - (. - sCreditsText_MuneoSaito)
	.endif

	@ src/data/credits.h:130 sCreditsText_RenaYoshikawa
	.globl sCreditsText_RenaYoshikawa
sCreditsText_RenaYoshikawa: @ 0x085C6F3B
	.string "よしかわ れな{EOS}"
	.if (. - sCreditsText_RenaYoshikawa) > 0x8
	.error "sCreditsText_RenaYoshikawa may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_RenaYoshikawa) < 0x8
	.space 0x8 - (. - sCreditsText_RenaYoshikawa)
	.endif

	@ src/data/credits.h:131 sCreditsText_GoIchinose
	.globl sCreditsText_GoIchinose
sCreditsText_GoIchinose: @ 0x085C6F43
	.string "いちのせ ごう{EOS}"
	.if (. - sCreditsText_GoIchinose) > 0x8
	.error "sCreditsText_GoIchinose may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_GoIchinose) < 0x8
	.space 0x8 - (. - sCreditsText_GoIchinose)
	.endif

	@ src/data/credits.h:132 sCreditsText_MorikazuAoki
	.globl sCreditsText_MorikazuAoki
sCreditsText_MorikazuAoki: @ 0x085C6F4B
	.string "あおき もりかず{EOS}"
	.if (. - sCreditsText_MorikazuAoki) > 0x9
	.error "sCreditsText_MorikazuAoki may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MorikazuAoki) < 0x9
	.space 0x9 - (. - sCreditsText_MorikazuAoki)
	.endif

	@ src/data/credits.h:133 sCreditsText_KojiNishino
	.globl sCreditsText_KojiNishino
sCreditsText_KojiNishino: @ 0x085C6F54
	.string "にしの こうじ{EOS}"
	.if (. - sCreditsText_KojiNishino) > 0x8
	.error "sCreditsText_KojiNishino may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KojiNishino) < 0x8
	.space 0x8 - (. - sCreditsText_KojiNishino)
	.endif

	@ src/data/credits.h:134 sCreditsText_KenjiMatsushima
	.globl sCreditsText_KenjiMatsushima
sCreditsText_KenjiMatsushima: @ 0x085C6F5C
	.string "まつしま けんじ{EOS}"
	.if (. - sCreditsText_KenjiMatsushima) > 0x9
	.error "sCreditsText_KenjiMatsushima may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KenjiMatsushima) < 0x9
	.space 0x9 - (. - sCreditsText_KenjiMatsushima)
	.endif

	@ src/data/credits.h:135 sCreditsText_TetsujiOhta
	.globl sCreditsText_TetsujiOhta
sCreditsText_TetsujiOhta: @ 0x085C6F65
	.string "おおた てつじ{EOS}"
	.if (. - sCreditsText_TetsujiOhta) > 0x8
	.error "sCreditsText_TetsujiOhta may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TetsujiOhta) < 0x8
	.space 0x8 - (. - sCreditsText_TetsujiOhta)
	.endif
