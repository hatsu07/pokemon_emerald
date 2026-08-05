
	@ src/data/credits.h:152 sCreditsText_AkikoShinozaki
	.globl gText_Rom_5C6FFC
gText_Rom_5C6FFC: @ 0x085C6FFC
	.string "しのざき あきこ$"
	.if (. - gText_Rom_5C6FFC) > 0x9
	.error "gText_Rom_5C6FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FFC) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FFC)
	.endif

	@ src/data/credits.h:153 sCreditsText_AstukoFujii
	.globl gText_Rom_5C7005
gText_Rom_5C7005: @ 0x085C7005
	.string "ふじい あつこ$"
	.if (. - gText_Rom_5C7005) > 0x8
	.error "gText_Rom_5C7005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7005) < 0x8
	.space 0x8 - (. - gText_Rom_5C7005)
	.endif

	@ src/data/credits.h:154 sCreditsText_NozomuSaito
	.globl gText_Rom_5C700D
gText_Rom_5C700D: @ 0x085C700D
	.string "さいとう のぞむ$"
	.if (. - gText_Rom_5C700D) > 0x9
	.error "gText_Rom_5C700D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C700D) < 0x9
	.space 0x9 - (. - gText_Rom_5C700D)
	.endif

	@ src/data/credits.h:155 sCreditsText_KenkichiToyama
	.globl gText_Rom_5C7016
gText_Rom_5C7016: @ 0x085C7016
	.string "とやま けんきち$"
	.if (. - gText_Rom_5C7016) > 0x9
	.error "gText_Rom_5C7016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7016) < 0x9
	.space 0x9 - (. - gText_Rom_5C7016)
	.endif

	@ src/data/credits.h:156 sCreditsText_SuguruNakatsui
	.globl gText_Rom_5C701F
gText_Rom_5C701F: @ 0x085C701F
	.string "なかつい すぐる$"
	.if (. - gText_Rom_5C701F) > 0x9
	.error "gText_Rom_5C701F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C701F) < 0x9
	.space 0x9 - (. - gText_Rom_5C701F)
	.endif

	@ src/data/credits.h:157 sCreditsText_YumiFunasaka
	.globl gText_Rom_5C7028
gText_Rom_5C7028: @ 0x085C7028
	.string "ふなさか ゆみ$"
	.if (. - gText_Rom_5C7028) > 0x8
	.error "gText_Rom_5C7028 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7028) < 0x8
	.space 0x8 - (. - gText_Rom_5C7028)
	.endif

	@ src/data/credits.h:158 sCreditsText_NaokoYanase
	.globl gText_Rom_5C7030
gText_Rom_5C7030: @ 0x085C7030
	.string "やなせ なおこ$"
	.if (. - gText_Rom_5C7030) > 0x8
	.error "gText_Rom_5C7030 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7030) < 0x8
	.space 0x8 - (. - gText_Rom_5C7030)
	.endif

	@ src/data/credits.h:159 sCreditsText_NCLSuperMarioClub
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C7038
gText_Rom_5C7038: @ 0x085C7038
	.string "スーパーマリオクラブ$"
	.if (. - gText_Rom_5C7038) != 0xb
	.error "gText_Rom_5C7038 must retain its original byte length"
	.endif
	.globl gText_Rom_5C703F
	.set gText_Rom_5C703F, gText_Rom_5C7038 + 0x7

	@ src/data/credits.h:160 sCreditsText_AtsushiTada
	.globl gText_Rom_5C7043
gText_Rom_5C7043: @ 0x085C7043
	.string "ただ あつし$"
	.if (. - gText_Rom_5C7043) > 0x7
	.error "gText_Rom_5C7043 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7043) < 0x7
	.space 0x7 - (. - gText_Rom_5C7043)
	.endif

	@ src/data/credits.h:161 sCreditsText_TakahiroOhnishi
	.globl gText_Rom_5C704A
gText_Rom_5C704A: @ 0x085C704A
	.string "おおにし たかひろ$"
	.if (. - gText_Rom_5C704A) > 0xa
	.error "gText_Rom_5C704A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C704A) < 0xa
	.space 0xa - (. - gText_Rom_5C704A)
	.endif

	@ src/data/credits.h:162 sCreditsText_NorihideOkamura
	.globl gText_Rom_5C7054
gText_Rom_5C7054: @ 0x085C7054
	.string "おかむら のりひで$"
	.if (. - gText_Rom_5C7054) > 0xa
	.error "gText_Rom_5C7054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7054) < 0xa
	.space 0xa - (. - gText_Rom_5C7054)
	.endif

	@ src/data/credits.h:163 sCreditsText_HiroNakamura
	.globl gText_Rom_5C705E
gText_Rom_5C705E: @ 0x085C705E
	.string "なかむら ひろき$"
	.if (. - gText_Rom_5C705E) > 0x9
	.error "gText_Rom_5C705E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C705E) < 0x9
	.space 0x9 - (. - gText_Rom_5C705E)
	.endif

	@ src/data/credits.h:164 sCreditsText_HiroyukiUesugi
	.globl gText_Rom_5C7067
gText_Rom_5C7067: @ 0x085C7067
	.string "うえすぎ ひろゆき$"
	.if (. - gText_Rom_5C7067) > 0xa
	.error "gText_Rom_5C7067 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7067) < 0xa
	.space 0xa - (. - gText_Rom_5C7067)
	.endif

	@ src/data/credits.h:165 sCreditsText_TerukiMurakawa
	.globl gText_Rom_5C7071
gText_Rom_5C7071: @ 0x085C7071
	.string "むらかわ てるき$"
	.if (. - gText_Rom_5C7071) > 0x9
	.error "gText_Rom_5C7071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7071) < 0x9
	.space 0x9 - (. - gText_Rom_5C7071)
	.endif

	@ src/data/credits.h:166 sCreditsText_AkiraKinashi
	.globl gText_Rom_5C707A
gText_Rom_5C707A: @ 0x085C707A
	.string "きなし あきら$"
	.if (. - gText_Rom_5C707A) > 0x8
	.error "gText_Rom_5C707A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C707A) < 0x8
	.space 0x8 - (. - gText_Rom_5C707A)
	.endif

