	@ src/data/credits.h:167 sCreditsText_MichikoTakizawa
	.globl sCreditsText_MichikoTakizawa
sCreditsText_MichikoTakizawa: @ 0x085C7082
	.string "たきざわ みちこ{EOS}"
	.if (. - sCreditsText_MichikoTakizawa) > 0x9
	.error "sCreditsText_MichikoTakizawa may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MichikoTakizawa) < 0x9
	.space 0x9 - (. - sCreditsText_MichikoTakizawa)
	.endif

	@ src/data/credits.h:168 sCreditsText_MakikoTakada
	.globl sCreditsText_MakikoTakada
sCreditsText_MakikoTakada: @ 0x085C708B
	.string "たかだ まきこ{EOS}"
	.if (. - sCreditsText_MakikoTakada) > 0x8
	.error "sCreditsText_MakikoTakada may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MakikoTakada) < 0x8
	.space 0x8 - (. - sCreditsText_MakikoTakada)
	.endif

	@ src/data/credits.h:169 sCreditsText_TakanaoKondo
	.globl sCreditsText_TakanaoKondo
sCreditsText_TakanaoKondo: @ 0x085C7093
	.string "こんどう たかなお{EOS}"
	.if (. - sCreditsText_TakanaoKondo) > 0xa
	.error "sCreditsText_TakanaoKondo may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakanaoKondo) < 0xa
	.space 0xa - (. - sCreditsText_TakanaoKondo)
	.endif

	@ src/data/credits.h:170 sCreditsText_AiMashima
	.globl sCreditsText_AiMashima
sCreditsText_AiMashima: @ 0x085C709D
	.string "ましま あい{EOS}"
	.if (. - sCreditsText_AiMashima) > 0x7
	.error "sCreditsText_AiMashima may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AiMashima) < 0x7
	.space 0x7 - (. - sCreditsText_AiMashima)
	.endif

	@ src/data/credits.h:171 sCreditsText_GakujiNomoto
	.globl sCreditsText_GakujiNomoto
sCreditsText_GakujiNomoto: @ 0x085C70A4
	.string "のもと がくじ{EOS}"
	.if (. - sCreditsText_GakujiNomoto) > 0x8
	.error "sCreditsText_GakujiNomoto may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_GakujiNomoto) < 0x8
	.space 0x8 - (. - sCreditsText_GakujiNomoto)
	.endif

	@ src/data/credits.h:172 sCreditsText_TakehiroIzushi
	.globl sCreditsText_TakehiroIzushi
sCreditsText_TakehiroIzushi: @ 0x085C70AC
	.string "いずし たけひろ{EOS}"
	.if (. - sCreditsText_TakehiroIzushi) > 0x9
	.error "sCreditsText_TakehiroIzushi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakehiroIzushi) < 0x9
	.space 0x9 - (. - sCreditsText_TakehiroIzushi)
	.endif

	@ src/data/credits.h:173 sCreditsText_HitoshiYamagami
	.globl sCreditsText_HitoshiYamagami
sCreditsText_HitoshiYamagami: @ 0x085C70B5
	.string "やまがみ ひとし{EOS}"
	.if (. - sCreditsText_HitoshiYamagami) > 0x9
	.error "sCreditsText_HitoshiYamagami may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HitoshiYamagami) < 0x9
	.space 0x9 - (. - sCreditsText_HitoshiYamagami)
	.endif

	@ src/data/credits.h:174 sCreditsText_KyokoWatanabe
	.globl sCreditsText_KyokoWatanabe
sCreditsText_KyokoWatanabe: @ 0x085C70BE
	.string "わたなべ きょうこ{EOS}"
	.if (. - sCreditsText_KyokoWatanabe) > 0xa
	.error "sCreditsText_KyokoWatanabe may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KyokoWatanabe) < 0xa
	.space 0xa - (. - sCreditsText_KyokoWatanabe)
	.endif

	@ src/data/credits.h:175 sCreditsText_TakaoNakano
	.globl sCreditsText_TakaoNakano
sCreditsText_TakaoNakano: @ 0x085C70C8
	.string "なかの たかお{EOS}"
	.if (. - sCreditsText_TakaoNakano) > 0x8
	.error "sCreditsText_TakaoNakano may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakaoNakano) < 0x8
	.space 0x8 - (. - sCreditsText_TakaoNakano)
	.endif

	@ src/data/credits.h:176 sCreditsText_HiroyukiJinnai
	.globl sCreditsText_HiroyukiJinnai
sCreditsText_HiroyukiJinnai: @ 0x085C70D0
	.string "じんない ひろゆき{EOS}"
	.if (. - sCreditsText_HiroyukiJinnai) > 0xa
	.error "sCreditsText_HiroyukiJinnai may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HiroyukiJinnai) < 0xa
	.space 0xa - (. - sCreditsText_HiroyukiJinnai)
	.endif

	@ src/data/credits.h:177 sCreditsText_HiroakiTsuru
	.globl sCreditsText_HiroakiTsuru
sCreditsText_HiroakiTsuru: @ 0x085C70DA
	.string "つる ひろあき{EOS}"
	.if (. - sCreditsText_HiroakiTsuru) > 0x8
	.error "sCreditsText_HiroakiTsuru may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HiroakiTsuru) < 0x8
	.space 0x8 - (. - sCreditsText_HiroakiTsuru)
	.endif

	@ src/data/credits.h:178 sCreditsText_TsunekazIshihara
	.globl sCreditsText_TsunekazIshihara
sCreditsText_TsunekazIshihara: @ 0x085C70E2
	.string "いしはら つねかず{EOS}"
	.if (. - sCreditsText_TsunekazIshihara) > 0xa
	.error "sCreditsText_TsunekazIshihara may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TsunekazIshihara) < 0xa
	.space 0xa - (. - sCreditsText_TsunekazIshihara)
	.endif

	@ src/data/credits.h:179 sCreditsText_SatoruIwata
	.globl sCreditsText_SatoruIwata
sCreditsText_SatoruIwata: @ 0x085C70EC
	.string "いわた さとる{EOS}"
	.if (. - sCreditsText_SatoruIwata) > 0x8
	.error "sCreditsText_SatoruIwata may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SatoruIwata) < 0x8
	.space 0x8 - (. - sCreditsText_SatoruIwata)
	.endif

	@ src/data/credits.h:180 sCreditsText_KazuyaSuyama
	.globl sCreditsText_KazuyaSuyama
sCreditsText_KazuyaSuyama: @ 0x085C70F4
	.string "すやま かずや{EOS}"
	.if (. - sCreditsText_KazuyaSuyama) > 0x8
	.error "sCreditsText_KazuyaSuyama may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KazuyaSuyama) < 0x8
	.space 0x8 - (. - sCreditsText_KazuyaSuyama)
	.endif

	@ src/data/credits.h:181 sCreditsText_SatoshiMitsuhara
	.globl sCreditsText_SatoshiMitsuhara
sCreditsText_SatoshiMitsuhara: @ 0x085C70FC
	.string "みつはら さとし{EOS}"
	.if (. - sCreditsText_SatoshiMitsuhara) > 0x9
	.error "sCreditsText_SatoshiMitsuhara may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SatoshiMitsuhara) < 0x9
	.space 0x9 - (. - sCreditsText_SatoshiMitsuhara)
	.endif

	@ src/data/credits.h:182 sCreditsText_JapanBrailleLibrary
	.globl sCreditsText_JapanBrailleLibrary
sCreditsText_JapanBrailleLibrary: @ 0x085C7105
	.string "にっぽんてんじとしょかん{EOS}"
	.if (. - sCreditsText_JapanBrailleLibrary) > 0xd
	.error "sCreditsText_JapanBrailleLibrary may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_JapanBrailleLibrary) < 0xd
	.space 0xd - (. - sCreditsText_JapanBrailleLibrary)
	.endif

