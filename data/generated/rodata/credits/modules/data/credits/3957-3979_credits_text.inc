	@ src/data/credits.h:183 sCreditsText_TomotakaKomura
	.globl gText_Rom_5C7112
gText_Rom_5C7112: @ 0x085C7112
	.string "こむら ともたか$"
	.if (. - gText_Rom_5C7112) > 0x9
	.error "gText_Rom_5C7112 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7112) < 0x9
	.space 0x9 - (. - gText_Rom_5C7112)
	.endif

	@ src/data/credits.h:184 sCreditsText_MikikoOhhashi
	.globl gText_Rom_5C711B
gText_Rom_5C711B: @ 0x085C711B
	.string "おおはし みきこ$"
	.if (. - gText_Rom_5C711B) > 0x9
	.error "gText_Rom_5C711B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C711B) < 0x9
	.space 0x9 - (. - gText_Rom_5C711B)
	.endif

	@ src/data/credits.h:185 sCreditsText_DaisukeHoshino
	.globl gText_Rom_5C7124
gText_Rom_5C7124: @ 0x085C7124
	.string "ほしの だいすけ$"
	.if (. - gText_Rom_5C7124) > 0x9
	.error "gText_Rom_5C7124 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7124) < 0x9
	.space 0x9 - (. - gText_Rom_5C7124)
	.endif

	@ src/data/credits.h:186 sCreditsText_KenjiroIto
	.globl gText_Rom_5C712D
gText_Rom_5C712D: @ 0x085C712D
	.string "いとう けんじろう$"
	.if (. - gText_Rom_5C712D) > 0xa
	.error "gText_Rom_5C712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C712D) < 0xa
	.space 0xa - (. - gText_Rom_5C712D)
	.endif

	@ src/data/credits.h:187 sCreditsText_RuiKawaguchi
	.globl gText_Rom_5C7137
gText_Rom_5C7137: @ 0x085C7137
	.string "かわぐち るい$"
	.if (. - gText_Rom_5C7137) > 0x8
	.error "gText_Rom_5C7137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7137) < 0x8
	.space 0x8 - (. - gText_Rom_5C7137)
	.endif

	@ src/data/credits.h:188 sCreditsText_ShunsukeKohori
	.globl gText_Rom_5C713F
gText_Rom_5C713F: @ 0x085C713F
	.string "こほり しゅんすけ$"
	.if (. - gText_Rom_5C713F) > 0xa
	.error "gText_Rom_5C713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C713F) < 0xa
	.space 0xa - (. - gText_Rom_5C713F)
	.endif

	@ src/data/credits.h:189 sCreditsText_SachikoNakamichi
	.globl gText_Rom_5C7149
gText_Rom_5C7149: @ 0x085C7149
	.string "なかみち さちこ$"
	.if (. - gText_Rom_5C7149) > 0x9
	.error "gText_Rom_5C7149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7149) < 0x9
	.space 0x9 - (. - gText_Rom_5C7149)
	.endif

	@ src/data/credits.h:190 sCreditsText_FujikoNomura
	.globl gText_Rom_5C7152
gText_Rom_5C7152: @ 0x085C7152
	.string "のむら ふじこ$"
	.if (. - gText_Rom_5C7152) > 0x8
	.error "gText_Rom_5C7152 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7152) < 0x8
	.space 0x8 - (. - gText_Rom_5C7152)
	.endif

	@ src/data/credits.h:191 sCreditsText_KazukiYoshihara
	.globl gText_Rom_5C715A
gText_Rom_5C715A: @ 0x085C715A
	.string "よしはら かずき$"
	.if (. - gText_Rom_5C715A) > 0x9
	.error "gText_Rom_5C715A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C715A) < 0x9
	.space 0x9 - (. - gText_Rom_5C715A)
	.endif

	@ src/data/credits.h:192 sCreditsText_RetsujiNomoto
	.globl gText_Rom_5C7163
gText_Rom_5C7163: @ 0x085C7163
	.string "のもと れつじ$"
	.if (. - gText_Rom_5C7163) > 0x8
	.error "gText_Rom_5C7163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7163) < 0x8
	.space 0x8 - (. - gText_Rom_5C7163)
	.endif

	@ src/data/credits.h:193 sCreditsText_AzusaTajima
	.globl gText_Rom_5C716B
gText_Rom_5C716B: @ 0x085C716B
	.string "たじま あずさ$"
	.if (. - gText_Rom_5C716B) > 0x8
	.error "gText_Rom_5C716B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C716B) < 0x8
	.space 0x8 - (. - gText_Rom_5C716B)
	.endif

	@ src/data/credits.h:194 sCreditsText_ShusakuEgami
	.globl gText_Rom_5C7173
gText_Rom_5C7173: @ 0x085C7173
	.string "えがみ しゅうさく$"
	.if (. - gText_Rom_5C7173) > 0xa
	.error "gText_Rom_5C7173 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7173) < 0xa
	.space 0xa - (. - gText_Rom_5C7173)
	.endif
	@ Replaced baserom.gba range: offset=0x5C717D, size=0x413
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB3, 0x6C, 0x5C, 0x08, 0x07, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CB4 @ ROM pointer 0x085C6CB4
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CC4 @ ROM pointer 0x085C6CC4
	.byte 0x08, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CCC @ ROM pointer 0x085C6CCC
	.byte 0x0C, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CDB @ ROM pointer 0x085C6CDB
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CE2 @ ROM pointer 0x085C6CE2
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CED @ ROM pointer 0x085C6CED
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6CF8 @ ROM pointer 0x085C6CF8
	.byte 0x08, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D02 @ ROM pointer 0x085C6D02
	.byte 0x07, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D11 @ ROM pointer 0x085C6D11
	.byte 0x0C, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D22 @ ROM pointer 0x085C6D22
	.byte 0x07, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D28 @ ROM pointer 0x085C6D28
	.byte 0x09, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D38 @ ROM pointer 0x085C6D38
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D44 @ ROM pointer 0x085C6D44
	.byte 0x0D, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D4E @ ROM pointer 0x085C6D4E
	.byte 0x04, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D53 @ ROM pointer 0x085C6D53
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D67 @ ROM pointer 0x085C6D67
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D70 @ ROM pointer 0x085C6D70
	.byte 0x0D, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D79 @ ROM pointer 0x085C6D79
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D7E @ ROM pointer 0x085C6D7E
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D89 @ ROM pointer 0x085C6D89
	.byte 0x09, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D92 @ ROM pointer 0x085C6D92
	.byte 0x09, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6D9E @ ROM pointer 0x085C6D9E
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DAA @ ROM pointer 0x085C6DAA
	.byte 0x06, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DB3 @ ROM pointer 0x085C6DB3
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DC3 @ ROM pointer 0x085C6DC3
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DCB @ ROM pointer 0x085C6DCB
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DD5 @ ROM pointer 0x085C6DD5
	.byte 0x0B, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DDE @ ROM pointer 0x085C6DDE
	.byte 0x07, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DE6 @ ROM pointer 0x085C6DE6
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6DF6 @ ROM pointer 0x085C6DF6
	.byte 0x08, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E00 @ ROM pointer 0x085C6E00
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E0F @ ROM pointer 0x085C6E0F
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E19 @ ROM pointer 0x085C6E19
	.byte 0x08, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E25 @ ROM pointer 0x085C6E25
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E33 @ ROM pointer 0x085C6E33
	.byte 0x0C, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E3E @ ROM pointer 0x085C6E3E
	.byte 0x0A, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E46 @ ROM pointer 0x085C6E46
	.byte 0x09, 0x01, 0x00, 0x00
	.4byte gText_Rom_5C6E51 @ ROM pointer 0x085C6E51
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E5D @ ROM pointer 0x085C6E5D
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E65 @ ROM pointer 0x085C6E65
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E6F @ ROM pointer 0x085C6E6F
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E77 @ ROM pointer 0x085C6E77
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E80 @ ROM pointer 0x085C6E80
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E89 @ ROM pointer 0x085C6E89
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E91 @ ROM pointer 0x085C6E91
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6E9A @ ROM pointer 0x085C6E9A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EA1 @ ROM pointer 0x085C6EA1
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EA9 @ ROM pointer 0x085C6EA9
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EB2 @ ROM pointer 0x085C6EB2
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EBC @ ROM pointer 0x085C6EBC
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EC3 @ ROM pointer 0x085C6EC3
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6ECB @ ROM pointer 0x085C6ECB
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6ED4 @ ROM pointer 0x085C6ED4
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EDD @ ROM pointer 0x085C6EDD
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EE6 @ ROM pointer 0x085C6EE6
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EEF @ ROM pointer 0x085C6EEF
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6EF9 @ ROM pointer 0x085C6EF9
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F01 @ ROM pointer 0x085C6F01
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F0A @ ROM pointer 0x085C6F0A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F12 @ ROM pointer 0x085C6F12
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F1A @ ROM pointer 0x085C6F1A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F21 @ ROM pointer 0x085C6F21
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F2A @ ROM pointer 0x085C6F2A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F32 @ ROM pointer 0x085C6F32
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F3B @ ROM pointer 0x085C6F3B
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F43 @ ROM pointer 0x085C6F43
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F4B @ ROM pointer 0x085C6F4B
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F54 @ ROM pointer 0x085C6F54
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F5C @ ROM pointer 0x085C6F5C
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F65 @ ROM pointer 0x085C6F65
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F6D @ ROM pointer 0x085C6F6D
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F75 @ ROM pointer 0x085C6F75
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F7F @ ROM pointer 0x085C6F7F
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F8A @ ROM pointer 0x085C6F8A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F93 @ ROM pointer 0x085C6F93
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6F9C @ ROM pointer 0x085C6F9C
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FA6 @ ROM pointer 0x085C6FA6
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FB0 @ ROM pointer 0x085C6FB0
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FB9 @ ROM pointer 0x085C6FB9
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FC2 @ ROM pointer 0x085C6FC2
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FCB @ ROM pointer 0x085C6FCB
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FD3 @ ROM pointer 0x085C6FD3
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FDC @ ROM pointer 0x085C6FDC
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FE4 @ ROM pointer 0x085C6FE4
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FEC @ ROM pointer 0x085C6FEC
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FF4 @ ROM pointer 0x085C6FF4
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C6FFC @ ROM pointer 0x085C6FFC
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7005 @ ROM pointer 0x085C7005
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C700D @ ROM pointer 0x085C700D
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7016 @ ROM pointer 0x085C7016
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C701F @ ROM pointer 0x085C701F
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7028 @ ROM pointer 0x085C7028
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7030 @ ROM pointer 0x085C7030
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7038 @ ROM pointer 0x085C7038
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7043 @ ROM pointer 0x085C7043
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C704A @ ROM pointer 0x085C704A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7054 @ ROM pointer 0x085C7054
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C705E @ ROM pointer 0x085C705E
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7067 @ ROM pointer 0x085C7067
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7071 @ ROM pointer 0x085C7071
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C707A @ ROM pointer 0x085C707A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7082 @ ROM pointer 0x085C7082
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C708B @ ROM pointer 0x085C708B
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7093 @ ROM pointer 0x085C7093
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C709D @ ROM pointer 0x085C709D
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70A4 @ ROM pointer 0x085C70A4
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70AC @ ROM pointer 0x085C70AC
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70B5 @ ROM pointer 0x085C70B5
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70BE @ ROM pointer 0x085C70BE
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70C8 @ ROM pointer 0x085C70C8
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70D0 @ ROM pointer 0x085C70D0
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70DA @ ROM pointer 0x085C70DA
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70E2 @ ROM pointer 0x085C70E2
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70EC @ ROM pointer 0x085C70EC
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70F4 @ ROM pointer 0x085C70F4
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C70FC @ ROM pointer 0x085C70FC
	.byte 0x09, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7105 @ ROM pointer 0x085C7105
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7112 @ ROM pointer 0x085C7112
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C711B @ ROM pointer 0x085C711B
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7124 @ ROM pointer 0x085C7124
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C712D @ ROM pointer 0x085C712D
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7137 @ ROM pointer 0x085C7137
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C713F @ ROM pointer 0x085C713F
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7149 @ ROM pointer 0x085C7149
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7152 @ ROM pointer 0x085C7152
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C715A @ ROM pointer 0x085C715A
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7163 @ ROM pointer 0x085C7163
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C716B @ ROM pointer 0x085C716B
	.byte 0x0B, 0x00, 0x00, 0x00
	.4byte gText_Rom_5C7173 @ ROM pointer 0x085C7173
