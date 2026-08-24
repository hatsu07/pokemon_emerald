
	@ src/data/credits.h:152 sCreditsText_AkikoShinozaki
	.globl sCreditsText_AkikoShinozaki
sCreditsText_AkikoShinozaki: @ 0x085C6FFC
	.string "しのざき あきこ{EOS}"
	.if (. - sCreditsText_AkikoShinozaki) > 0x9
	.error "sCreditsText_AkikoShinozaki may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AkikoShinozaki) < 0x9
	.space 0x9 - (. - sCreditsText_AkikoShinozaki)
	.endif

	@ src/data/credits.h:153 sCreditsText_AstukoFujii
	.globl sCreditsText_AstukoFujii
sCreditsText_AstukoFujii: @ 0x085C7005
	.string "ふじい あつこ{EOS}"
	.if (. - sCreditsText_AstukoFujii) > 0x8
	.error "sCreditsText_AstukoFujii may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AstukoFujii) < 0x8
	.space 0x8 - (. - sCreditsText_AstukoFujii)
	.endif

	@ src/data/credits.h:154 sCreditsText_NozomuSaito
	.globl sCreditsText_NozomuSaito
sCreditsText_NozomuSaito: @ 0x085C700D
	.string "さいとう のぞむ{EOS}"
	.if (. - sCreditsText_NozomuSaito) > 0x9
	.error "sCreditsText_NozomuSaito may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_NozomuSaito) < 0x9
	.space 0x9 - (. - sCreditsText_NozomuSaito)
	.endif

	@ src/data/credits.h:155 sCreditsText_KenkichiToyama
	.globl sCreditsText_KenkichiToyama
sCreditsText_KenkichiToyama: @ 0x085C7016
	.string "とやま けんきち{EOS}"
	.if (. - sCreditsText_KenkichiToyama) > 0x9
	.error "sCreditsText_KenkichiToyama may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_KenkichiToyama) < 0x9
	.space 0x9 - (. - sCreditsText_KenkichiToyama)
	.endif

	@ src/data/credits.h:156 sCreditsText_SuguruNakatsui
	.globl sCreditsText_SuguruNakatsui
sCreditsText_SuguruNakatsui: @ 0x085C701F
	.string "なかつい すぐる{EOS}"
	.if (. - sCreditsText_SuguruNakatsui) > 0x9
	.error "sCreditsText_SuguruNakatsui may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SuguruNakatsui) < 0x9
	.space 0x9 - (. - sCreditsText_SuguruNakatsui)
	.endif

	@ src/data/credits.h:157 sCreditsText_YumiFunasaka
	.globl sCreditsText_YumiFunasaka
sCreditsText_YumiFunasaka: @ 0x085C7028
	.string "ふなさか ゆみ{EOS}"
	.if (. - sCreditsText_YumiFunasaka) > 0x8
	.error "sCreditsText_YumiFunasaka may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_YumiFunasaka) < 0x8
	.space 0x8 - (. - sCreditsText_YumiFunasaka)
	.endif

	@ src/data/credits.h:158 sCreditsText_NaokoYanase
	.globl sCreditsText_NaokoYanase
sCreditsText_NaokoYanase: @ 0x085C7030
	.string "やなせ なおこ{EOS}"
	.if (. - sCreditsText_NaokoYanase) > 0x8
	.error "sCreditsText_NaokoYanase may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_NaokoYanase) < 0x8
	.space 0x8 - (. - sCreditsText_NaokoYanase)
	.endif

	@ src/data/credits.h:159 sCreditsText_NCLSuperMarioClub
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_NCLSuperMarioClub
sCreditsText_NCLSuperMarioClub: @ 0x085C7038
	.string "スーパーマリオクラブ{EOS}"
	.if (. - sCreditsText_NCLSuperMarioClub) != 0xb
	.error "sCreditsText_NCLSuperMarioClub must retain its original byte length"
	.endif

	@ src/data/credits.h:160 sCreditsText_AtsushiTada
	.globl sCreditsText_AtsushiTada
sCreditsText_AtsushiTada: @ 0x085C7043
	.string "ただ あつし{EOS}"
	.if (. - sCreditsText_AtsushiTada) > 0x7
	.error "sCreditsText_AtsushiTada may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AtsushiTada) < 0x7
	.space 0x7 - (. - sCreditsText_AtsushiTada)
	.endif

	@ src/data/credits.h:161 sCreditsText_TakahiroOhnishi
	.globl sCreditsText_TakahiroOhnishi
sCreditsText_TakahiroOhnishi: @ 0x085C704A
	.string "おおにし たかひろ{EOS}"
	.if (. - sCreditsText_TakahiroOhnishi) > 0xa
	.error "sCreditsText_TakahiroOhnishi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TakahiroOhnishi) < 0xa
	.space 0xa - (. - sCreditsText_TakahiroOhnishi)
	.endif

	@ src/data/credits.h:162 sCreditsText_NorihideOkamura
	.globl sCreditsText_NorihideOkamura
sCreditsText_NorihideOkamura: @ 0x085C7054
	.string "おかむら のりひで{EOS}"
	.if (. - sCreditsText_NorihideOkamura) > 0xa
	.error "sCreditsText_NorihideOkamura may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_NorihideOkamura) < 0xa
	.space 0xa - (. - sCreditsText_NorihideOkamura)
	.endif

	@ src/data/credits.h:163 sCreditsText_HiroNakamura
	.globl sCreditsText_HiroNakamura
sCreditsText_HiroNakamura: @ 0x085C705E
	.string "なかむら ひろき{EOS}"
	.if (. - sCreditsText_HiroNakamura) > 0x9
	.error "sCreditsText_HiroNakamura may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HiroNakamura) < 0x9
	.space 0x9 - (. - sCreditsText_HiroNakamura)
	.endif

	@ src/data/credits.h:164 sCreditsText_HiroyukiUesugi
	.globl sCreditsText_HiroyukiUesugi
sCreditsText_HiroyukiUesugi: @ 0x085C7067
	.string "うえすぎ ひろゆき{EOS}"
	.if (. - sCreditsText_HiroyukiUesugi) > 0xa
	.error "sCreditsText_HiroyukiUesugi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_HiroyukiUesugi) < 0xa
	.space 0xa - (. - sCreditsText_HiroyukiUesugi)
	.endif

	@ src/data/credits.h:165 sCreditsText_TerukiMurakawa
	.globl sCreditsText_TerukiMurakawa
sCreditsText_TerukiMurakawa: @ 0x085C7071
	.string "むらかわ てるき{EOS}"
	.if (. - sCreditsText_TerukiMurakawa) > 0x9
	.error "sCreditsText_TerukiMurakawa may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_TerukiMurakawa) < 0x9
	.space 0x9 - (. - sCreditsText_TerukiMurakawa)
	.endif

	@ src/data/credits.h:166 sCreditsText_AkiraKinashi
	.globl sCreditsText_AkiraKinashi
sCreditsText_AkiraKinashi: @ 0x085C707A
	.string "きなし あきら{EOS}"
	.if (. - sCreditsText_AkiraKinashi) > 0x8
	.error "sCreditsText_AkiraKinashi may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_AkiraKinashi) < 0x8
	.space 0x8 - (. - sCreditsText_AkiraKinashi)
	.endif

