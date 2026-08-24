
	@ src/data/credits.h:104 sCreditsText_SatoshiTajiri
	.globl sCreditsText_SatoshiTajiri
sCreditsText_SatoshiTajiri: @ 0x085C6E5D
	.string "たじり さとし{EOS}"
	.if (. - sCreditsText_SatoshiTajiri) > 0x8
	.error "sCreditsText_SatoshiTajiri may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SatoshiTajiri) < 0x8
	.space 0x8 - (. - sCreditsText_SatoshiTajiri)
	.endif

	@ src/data/credits.h:105 sCreditsText_JunichiMasuda
	.globl sCreditsText_JunichiMasuda
sCreditsText_JunichiMasuda: @ 0x085C6E65
	.string "ますだ じゅんいち{EOS}"
	.if (. - sCreditsText_JunichiMasuda) > 0xa
	.error "sCreditsText_JunichiMasuda may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_JunichiMasuda) < 0xa
	.space 0xa - (. - sCreditsText_JunichiMasuda)
	.endif

	@ src/data/credits.h:106 sCreditsText_KenSugimori
	.globl sCreditsText_KenSugimori
sCreditsText_KenSugimori: @ 0x085C6E6F
	.string "すぎもり けん{EOS}"
	.if (. - sCreditsText_KenSugimori) > 0x8
	.error "sCreditsText_KenSugimori may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KenSugimori) < 0x8
	.space 0x8 - (. - sCreditsText_KenSugimori)
	.endif

	@ src/data/credits.h:107 sCreditsText_ShigekiMorimoto
	.globl sCreditsText_ShigekiMorimoto
sCreditsText_ShigekiMorimoto: @ 0x085C6E77
	.string "もりもと しげき{EOS}"
	.if (. - sCreditsText_ShigekiMorimoto) > 0x9
	.error "sCreditsText_ShigekiMorimoto may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ShigekiMorimoto) < 0x9
	.space 0x9 - (. - sCreditsText_ShigekiMorimoto)
	.endif

	@ src/data/credits.h:108 sCreditsText_TetsuyaWatanabe
	.globl sCreditsText_TetsuyaWatanabe
sCreditsText_TetsuyaWatanabe: @ 0x085C6E80
	.string "わたなべ てつや{EOS}"
	.if (. - sCreditsText_TetsuyaWatanabe) > 0x9
	.error "sCreditsText_TetsuyaWatanabe may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TetsuyaWatanabe) < 0x9
	.space 0x9 - (. - sCreditsText_TetsuyaWatanabe)
	.endif

	@ src/data/credits.h:109 sCreditsText_HisashiSogabe
	.globl sCreditsText_HisashiSogabe
sCreditsText_HisashiSogabe: @ 0x085C6E89
	.string "そがべ ひさし{EOS}"
	.if (. - sCreditsText_HisashiSogabe) > 0x8
	.error "sCreditsText_HisashiSogabe may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HisashiSogabe) < 0x8
	.space 0x8 - (. - sCreditsText_HisashiSogabe)
	.endif

	@ src/data/credits.h:110 sCreditsText_SosukeTamada
	.globl sCreditsText_SosukeTamada
sCreditsText_SosukeTamada: @ 0x085C6E91
	.string "たまだ そうすけ{EOS}"
	.if (. - sCreditsText_SosukeTamada) > 0x9
	.error "sCreditsText_SosukeTamada may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SosukeTamada) < 0x9
	.space 0x9 - (. - sCreditsText_SosukeTamada)
	.endif

	@ src/data/credits.h:111 sCreditsText_AkitoMori
	.globl sCreditsText_AkitoMori
sCreditsText_AkitoMori: @ 0x085C6E9A
	.string "もり あきと{EOS}"
	.if (. - sCreditsText_AkitoMori) > 0x7
	.error "sCreditsText_AkitoMori may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AkitoMori) < 0x7
	.space 0x7 - (. - sCreditsText_AkitoMori)
	.endif

	@ src/data/credits.h:112 sCreditsText_KeitaKagaya
	.globl sCreditsText_KeitaKagaya
sCreditsText_KeitaKagaya: @ 0x085C6EA1
	.string "かがや けいた{EOS}"
	.if (. - sCreditsText_KeitaKagaya) > 0x8
	.error "sCreditsText_KeitaKagaya may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KeitaKagaya) < 0x8
	.space 0x8 - (. - sCreditsText_KeitaKagaya)
	.endif

	@ src/data/credits.h:113 sCreditsText_YoshinoriMatsuda
	.globl sCreditsText_YoshinoriMatsuda
sCreditsText_YoshinoriMatsuda: @ 0x085C6EA9
	.string "まつだ よしのり{EOS}"
	.if (. - sCreditsText_YoshinoriMatsuda) > 0x9
	.error "sCreditsText_YoshinoriMatsuda may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_YoshinoriMatsuda) < 0x9
	.space 0x9 - (. - sCreditsText_YoshinoriMatsuda)
	.endif

	@ src/data/credits.h:114 sCreditsText_HiroyukiNakamura
	.globl sCreditsText_HiroyukiNakamura
sCreditsText_HiroyukiNakamura: @ 0x085C6EB2
	.string "なかむら ひろゆき{EOS}"
	.if (. - sCreditsText_HiroyukiNakamura) > 0xa
	.error "sCreditsText_HiroyukiNakamura may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HiroyukiNakamura) < 0xa
	.space 0xa - (. - sCreditsText_HiroyukiNakamura)
	.endif

	@ src/data/credits.h:115 sCreditsText_MasaoTaya
	.globl sCreditsText_MasaoTaya
sCreditsText_MasaoTaya: @ 0x085C6EBC
	.string "たや まさお{EOS}"
	.if (. - sCreditsText_MasaoTaya) > 0x7
	.error "sCreditsText_MasaoTaya may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MasaoTaya) < 0x7
	.space 0x7 - (. - sCreditsText_MasaoTaya)
	.endif

	@ src/data/credits.h:116 sCreditsText_SatoshiNohara
	.globl sCreditsText_SatoshiNohara
sCreditsText_SatoshiNohara: @ 0x085C6EC3
	.string "のはら さとし{EOS}"
	.if (. - sCreditsText_SatoshiNohara) > 0x8
	.error "sCreditsText_SatoshiNohara may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SatoshiNohara) < 0x8
	.space 0x8 - (. - sCreditsText_SatoshiNohara)
	.endif

	@ src/data/credits.h:117 sCreditsText_TomomichiOhta
	.globl sCreditsText_TomomichiOhta
sCreditsText_TomomichiOhta: @ 0x085C6ECB
	.string "おおた ともみち{EOS}"
	.if (. - sCreditsText_TomomichiOhta) > 0x9
	.error "sCreditsText_TomomichiOhta may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TomomichiOhta) < 0x9
	.space 0x9 - (. - sCreditsText_TomomichiOhta)
	.endif

	@ src/data/credits.h:118 sCreditsText_MiyukiIwasawa
	.globl sCreditsText_MiyukiIwasawa
sCreditsText_MiyukiIwasawa: @ 0x085C6ED4
	.string "いわさわ みゆき{EOS}"
	.if (. - sCreditsText_MiyukiIwasawa) > 0x9
	.error "sCreditsText_MiyukiIwasawa may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_MiyukiIwasawa) < 0x9
	.space 0x9 - (. - sCreditsText_MiyukiIwasawa)
	.endif

	@ src/data/credits.h:119 sCreditsText_TakenoriOhta
	.globl sCreditsText_TakenoriOhta
sCreditsText_TakenoriOhta: @ 0x085C6EDD
	.string "おおた たけのり{EOS}"
	.if (. - sCreditsText_TakenoriOhta) > 0x9
	.error "sCreditsText_TakenoriOhta may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakenoriOhta) < 0x9
	.space 0x9 - (. - sCreditsText_TakenoriOhta)
	.endif
