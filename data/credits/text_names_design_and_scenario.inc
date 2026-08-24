
	@ src/data/credits.h:136 sCreditsText_HitomiSato
	.globl sCreditsText_HitomiSato
sCreditsText_HitomiSato: @ 0x085C6F6D
	.string "さとう ひとみ{EOS}"
	.if (. - sCreditsText_HitomiSato) > 0x8
	.error "sCreditsText_HitomiSato may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HitomiSato) < 0x8
	.space 0x8 - (. - sCreditsText_HitomiSato)
	.endif

	@ src/data/credits.h:137 sCreditsText_TakeshiKawachimaru
	.globl sCreditsText_TakeshiKawachimaru
sCreditsText_TakeshiKawachimaru: @ 0x085C6F75
	.string "かわちまる たけし{EOS}"
	.if (. - sCreditsText_TakeshiKawachimaru) > 0xa
	.error "sCreditsText_TakeshiKawachimaru may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakeshiKawachimaru) < 0xa
	.space 0xa - (. - sCreditsText_TakeshiKawachimaru)
	.endif

	@ src/data/credits.h:138 sCreditsText_TeruyukiShimoyamada
	.globl sCreditsText_TeruyukiShimoyamada
sCreditsText_TeruyukiShimoyamada: @ 0x085C6F7F
	.string "しもやまだ てるゆき{EOS}"
	.if (. - sCreditsText_TeruyukiShimoyamada) > 0xb
	.error "sCreditsText_TeruyukiShimoyamada may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TeruyukiShimoyamada) < 0xb
	.space 0xb - (. - sCreditsText_TeruyukiShimoyamada)
	.endif

	@ src/data/credits.h:139 sCreditsText_ShigeruOhmori
	.globl sCreditsText_ShigeruOhmori
sCreditsText_ShigeruOhmori: @ 0x085C6F8A
	.string "おおもり しげる{EOS}"
	.if (. - sCreditsText_ShigeruOhmori) > 0x9
	.error "sCreditsText_ShigeruOhmori may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ShigeruOhmori) < 0x9
	.space 0x9 - (. - sCreditsText_ShigeruOhmori)
	.endif

	@ src/data/credits.h:140 sCreditsText_TadashiTakahashi
	.globl sCreditsText_TadashiTakahashi
sCreditsText_TadashiTakahashi: @ 0x085C6F93
	.string "たかはし ただし{EOS}"
	.if (. - sCreditsText_TadashiTakahashi) > 0x9
	.error "sCreditsText_TadashiTakahashi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TadashiTakahashi) < 0x9
	.space 0x9 - (. - sCreditsText_TadashiTakahashi)
	.endif

	@ src/data/credits.h:141 sCreditsText_ToshinobuMatsumiya
	.globl sCreditsText_ToshinobuMatsumiya
sCreditsText_ToshinobuMatsumiya: @ 0x085C6F9C
	.string "まつみや としのぶ{EOS}"
	.if (. - sCreditsText_ToshinobuMatsumiya) > 0xa
	.error "sCreditsText_ToshinobuMatsumiya may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ToshinobuMatsumiya) < 0xa
	.space 0xa - (. - sCreditsText_ToshinobuMatsumiya)
	.endif

	@ src/data/credits.h:142 sCreditsText_AkihitoTomisawa
	.globl sCreditsText_AkihitoTomisawa
sCreditsText_AkihitoTomisawa: @ 0x085C6FA6
	.string "とみさわ あきひと{EOS}"
	.if (. - sCreditsText_AkihitoTomisawa) > 0xa
	.error "sCreditsText_AkihitoTomisawa may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AkihitoTomisawa) < 0xa
	.space 0xa - (. - sCreditsText_AkihitoTomisawa)
	.endif

	@ src/data/credits.h:143 sCreditsText_HirokiEnomoto
	.globl sCreditsText_HirokiEnomoto
sCreditsText_HirokiEnomoto: @ 0x085C6FB0
	.string "えのもと ひろき{EOS}"
	.if (. - sCreditsText_HirokiEnomoto) > 0x9
	.error "sCreditsText_HirokiEnomoto may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HirokiEnomoto) < 0x9
	.space 0x9 - (. - sCreditsText_HirokiEnomoto)
	.endif

	@ src/data/credits.h:144 sCreditsText_KazuyukiTerada
	.globl sCreditsText_KazuyukiTerada
sCreditsText_KazuyukiTerada: @ 0x085C6FB9
	.string "てらだ かずゆき{EOS}"
	.if (. - sCreditsText_KazuyukiTerada) > 0x9
	.error "sCreditsText_KazuyukiTerada may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KazuyukiTerada) < 0x9
	.space 0x9 - (. - sCreditsText_KazuyukiTerada)
	.endif

	@ src/data/credits.h:145 sCreditsText_YuriSakurai
	.globl sCreditsText_YuriSakurai
sCreditsText_YuriSakurai: @ 0x085C6FC2
	.string "さくらい ゆうり{EOS}"
	.if (. - sCreditsText_YuriSakurai) > 0x9
	.error "sCreditsText_YuriSakurai may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_YuriSakurai) < 0x9
	.space 0x9 - (. - sCreditsText_YuriSakurai)
	.endif

	@ src/data/credits.h:146 sCreditsText_HiromiSagawa
	.globl sCreditsText_HiromiSagawa
sCreditsText_HiromiSagawa: @ 0x085C6FCB
	.string "さがわ ひろみ{EOS}"
	.if (. - sCreditsText_HiromiSagawa) > 0x8
	.error "sCreditsText_HiromiSagawa may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HiromiSagawa) < 0x8
	.space 0x8 - (. - sCreditsText_HiromiSagawa)
	.endif

	@ src/data/credits.h:147 sCreditsText_KenjiTominaga
	.globl sCreditsText_KenjiTominaga
sCreditsText_KenjiTominaga: @ 0x085C6FD3
	.string "とみなが けんじ{EOS}"
	.if (. - sCreditsText_KenjiTominaga) > 0x9
	.error "sCreditsText_KenjiTominaga may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KenjiTominaga) < 0x9
	.space 0x9 - (. - sCreditsText_KenjiTominaga)
	.endif

	@ src/data/credits.h:148 sCreditsText_YoshioTajiri
	.globl sCreditsText_YoshioTajiri
sCreditsText_YoshioTajiri: @ 0x085C6FDC
	.string "たじり よしお{EOS}"
	.if (. - sCreditsText_YoshioTajiri) > 0x8
	.error "sCreditsText_YoshioTajiri may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_YoshioTajiri) < 0x8
	.space 0x8 - (. - sCreditsText_YoshioTajiri)
	.endif

	@ src/data/credits.h:149 sCreditsText_TeikoSasaki
	.globl sCreditsText_TeikoSasaki
sCreditsText_TeikoSasaki: @ 0x085C6FE4
	.string "ささき ていこ{EOS}"
	.if (. - sCreditsText_TeikoSasaki) > 0x8
	.error "sCreditsText_TeikoSasaki may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TeikoSasaki) < 0x8
	.space 0x8 - (. - sCreditsText_TeikoSasaki)
	.endif

	@ src/data/credits.h:150 sCreditsText_SachikoHamano
	.globl sCreditsText_SachikoHamano
sCreditsText_SachikoHamano: @ 0x085C6FEC
	.string "はまの さちこ{EOS}"
	.if (. - sCreditsText_SachikoHamano) > 0x8
	.error "sCreditsText_SachikoHamano may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SachikoHamano) < 0x8
	.space 0x8 - (. - sCreditsText_SachikoHamano)
	.endif

	@ src/data/credits.h:151 sCreditsText_ChieMatsumiya
	.globl sCreditsText_ChieMatsumiya
sCreditsText_ChieMatsumiya: @ 0x085C6FF4
	.string "まつみや ちえ{EOS}"
	.if (. - sCreditsText_ChieMatsumiya) > 0x8
	.error "sCreditsText_ChieMatsumiya may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ChieMatsumiya) < 0x8
	.space 0x8 - (. - sCreditsText_ChieMatsumiya)
	.endif
