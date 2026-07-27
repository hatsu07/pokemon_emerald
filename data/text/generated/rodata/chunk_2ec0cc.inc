	@ src/data/abilities.h:68 abilities_line_68
	.globl gText_Rom_2EC0CC
gText_Rom_2EC0CC: @ 0x082EC0CC
	.string "すなあらしで かいひりつが あがる$"
	.if (. - gText_Rom_2EC0CC) > 0x12
	.error "gText_Rom_2EC0CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0CC) < 0x12
	.space 0x12 - (. - gText_Rom_2EC0CC)
	.endif
	.incbin "baserom.gba", 0x2ec0de, 0x1

	@ src/data/abilities.h:76 abilities_line_76
	.globl gText_Rom_2EC0DF
gText_Rom_2EC0DF: @ 0x082EC0DF
	.string "さわった あいてを まひさせる$"
	.if (. - gText_Rom_2EC0DF) > 0x10
	.error "gText_Rom_2EC0DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0DF) < 0x10
	.space 0x10 - (. - gText_Rom_2EC0DF)
	.endif
	.incbin "baserom.gba", 0x2ec0ef, 0x3

	@ src/data/abilities.h:83 abilities_line_83
	.globl gText_Rom_2EC0F2
gText_Rom_2EC0F2: @ 0x082EC0F2
	.string "でんきを うけると かいふくする$"
	.if (. - gText_Rom_2EC0F2) > 0x11
	.error "gText_Rom_2EC0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0F2) < 0x11
	.space 0x11 - (. - gText_Rom_2EC0F2)
	.endif
	.incbin "baserom.gba", 0x2ec103, 0x2

	@ src/data/abilities.h:91 abilities_line_91
	.globl gText_Rom_2EC105
gText_Rom_2EC105: @ 0x082EC105
	.string "みずを うけると かいふくする$"
	.if (. - gText_Rom_2EC105) > 0x10
	.error "gText_Rom_2EC105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC105) < 0x10
	.space 0x10 - (. - gText_Rom_2EC105)
	.endif
	.incbin "baserom.gba", 0x2ec115, 0x3

	@ src/data/abilities.h:99 abilities_line_99
	.globl gText_Rom_2EC118
gText_Rom_2EC118: @ 0x082EC118
	.string "メロメロ じょうたいに ならない$"
	.if (. - gText_Rom_2EC118) > 0x11
	.error "gText_Rom_2EC118 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC118) < 0x11
	.space 0x11 - (. - gText_Rom_2EC118)
	.endif
	.incbin "baserom.gba", 0x2ec129, 0x2

	@ src/data/abilities.h:107 abilities_line_107 (+1 aliases)
	.globl gText_Rom_2EC12B
gText_Rom_2EC12B: @ 0x082EC12B
	.string "てんきの えいきょうが なくなる$"
	.if (. - gText_Rom_2EC12B) > 0x11
	.error "gText_Rom_2EC12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC12B) < 0x11
	.space 0x11 - (. - gText_Rom_2EC12B)
	.endif
	.incbin "baserom.gba", 0x2ec13c, 0x2

	@ src/data/abilities.h:114 abilities_line_114
	.globl gText_Rom_2EC13E
gText_Rom_2EC13E: @ 0x082EC13E
	.string "わざの めいちゅうりつが あがる$"
	.if (. - gText_Rom_2EC13E) > 0x11
	.error "gText_Rom_2EC13E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC13E) < 0x11
	.space 0x11 - (. - gText_Rom_2EC13E)
	.endif
	.incbin "baserom.gba", 0x2ec14f, 0x2

	@ src/data/abilities.h:121 abilities_line_121
	.globl gText_Rom_2EC151
gText_Rom_2EC151: @ 0x082EC151
	.string "ねむり じょうたいに ならない$"
	.if (. - gText_Rom_2EC151) > 0x10
	.error "gText_Rom_2EC151 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC151) < 0x10
	.space 0x10 - (. - gText_Rom_2EC151)
	.endif
	.incbin "baserom.gba", 0x2ec161, 0x3

	@ src/data/abilities.h:129 abilities_line_129
	.globl gText_Rom_2EC164
gText_Rom_2EC164: @ 0x082EC164
	.string "うけた わざの タイプに へんかする$"
	.if (. - gText_Rom_2EC164) > 0x13
	.error "gText_Rom_2EC164 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC164) < 0x13
	.space 0x13 - (. - gText_Rom_2EC164)
	.endif

	@ src/data/abilities.h:136 abilities_line_136
	.globl gText_Rom_2EC177
gText_Rom_2EC177: @ 0x082EC177
	.string "どく じょうたいに ならない$"
	.if (. - gText_Rom_2EC177) > 0xf
	.error "gText_Rom_2EC177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC177) < 0xf
	.space 0xf - (. - gText_Rom_2EC177)
	.endif
	.incbin "baserom.gba", 0x2ec186, 0x4

	@ src/data/abilities.h:144 abilities_line_144
	.globl gText_Rom_2EC18A
gText_Rom_2EC18A: @ 0x082EC18A
	.string "ほのおを うけると つよくなる$"
	.if (. - gText_Rom_2EC18A) > 0x10
	.error "gText_Rom_2EC18A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC18A) < 0x10
	.space 0x10 - (. - gText_Rom_2EC18A)
	.endif
	.incbin "baserom.gba", 0x2ec19a, 0x3

	@ src/data/abilities.h:152 abilities_line_152
	.globl gText_Rom_2EC19D
gText_Rom_2EC19D: @ 0x082EC19D
	.string "わざの ついかこうかを うけない$"
	.if (. - gText_Rom_2EC19D) > 0x11
	.error "gText_Rom_2EC19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC19D) < 0x11
	.space 0x11 - (. - gText_Rom_2EC19D)
	.endif
	.incbin "baserom.gba", 0x2ec1ae, 0x2

	@ src/data/abilities.h:160 abilities_line_160
	.globl gText_Rom_2EC1B0
gText_Rom_2EC1B0: @ 0x082EC1B0
	.string "こんらん じょうたいに ならない$"
	.if (. - gText_Rom_2EC1B0) > 0x11
	.error "gText_Rom_2EC1B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1B0) < 0x11
	.space 0x11 - (. - gText_Rom_2EC1B0)
	.endif
	.incbin "baserom.gba", 0x2ec1c1, 0x2

	@ src/data/abilities.h:168 abilities_line_168
	.globl gText_Rom_2EC1C3
gText_Rom_2EC1C3: @ 0x082EC1C3
	.string "きゅうばんで じめんに はりつく$"
	.if (. - gText_Rom_2EC1C3) > 0x11
	.error "gText_Rom_2EC1C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1C3) < 0x11
	.space 0x11 - (. - gText_Rom_2EC1C3)
	.endif
	.incbin "baserom.gba", 0x2ec1d4, 0x2

	@ src/data/abilities.h:176 abilities_line_176
	.globl gText_Rom_2EC1D6
gText_Rom_2EC1D6: @ 0x082EC1D6
	.string "あいての こうげきを さげる$"
	.if (. - gText_Rom_2EC1D6) > 0xf
	.error "gText_Rom_2EC1D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1D6) < 0xf
	.space 0xf - (. - gText_Rom_2EC1D6)
	.endif
	.incbin "baserom.gba", 0x2ec1e5, 0x4

	@ src/data/abilities.h:183 abilities_line_183 (+1 aliases)
	.globl gText_Rom_2EC1E9
gText_Rom_2EC1E9: @ 0x082EC1E9
	.string "あいてを にげられなくする$"
	.if (. - gText_Rom_2EC1E9) > 0xe
	.error "gText_Rom_2EC1E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1E9) < 0xe
	.space 0xe - (. - gText_Rom_2EC1E9)
	.endif
	.incbin "baserom.gba", 0x2ec1f7, 0x5

	@ src/data/abilities.h:190 abilities_line_190 (+1 aliases)
	.globl gText_Rom_2EC1FC
gText_Rom_2EC1FC: @ 0x082EC1FC
	.string "さわった あいてを キズつける$"
	.if (. - gText_Rom_2EC1FC) > 0x10
	.error "gText_Rom_2EC1FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1FC) < 0x10
	.space 0x10 - (. - gText_Rom_2EC1FC)
	.endif
	.incbin "baserom.gba", 0x2ec20c, 0x3

	@ src/data/abilities.h:197 abilities_line_197
	.globl gText_Rom_2EC20F
gText_Rom_2EC20F: @ 0x082EC20F
	.string "こうか ばつぐん しか あたらない$"
	.if (. - gText_Rom_2EC20F) > 0x12
	.error "gText_Rom_2EC20F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC20F) < 0x12
	.space 0x12 - (. - gText_Rom_2EC20F)
	.endif
	.incbin "baserom.gba", 0x2ec221, 0x1

	@ src/data/abilities.h:207 abilities_line_207
	.globl gText_Rom_2EC222
gText_Rom_2EC222: @ 0x082EC222
	.string "じめんタイプの わざを うけない$"
	.if (. - gText_Rom_2EC222) > 0x11
	.error "gText_Rom_2EC222 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC222) < 0x11
	.space 0x11 - (. - gText_Rom_2EC222)
	.endif
	.incbin "baserom.gba", 0x2ec233, 0x2

	@ src/data/abilities.h:215 abilities_line_215
	.globl gText_Rom_2EC235
gText_Rom_2EC235: @ 0x082EC235
	.string "さわった あいてに ほうしがつく$"
	.if (. - gText_Rom_2EC235) > 0x11
	.error "gText_Rom_2EC235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC235) < 0x11
	.space 0x11 - (. - gText_Rom_2EC235)
	.endif
	.incbin "baserom.gba", 0x2ec246, 0x2

	@ src/data/abilities.h:222 abilities_line_222
	.globl gText_Rom_2EC248
gText_Rom_2EC248: @ 0x082EC248
	.string "どく まひ やけどを あいてにうつす$"
	.if (. - gText_Rom_2EC248) > 0x13
	.error "gText_Rom_2EC248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC248) < 0x13
	.space 0x13 - (. - gText_Rom_2EC248)
	.endif

	@ src/data/abilities.h:229 abilities_line_229 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC25B
gText_Rom_2EC25B: @ 0x082EC25B
	.string "あいてに のうりょくを さげられない$"
	.if (. - gText_Rom_2EC25B) != 0x13
	.error "gText_Rom_2EC25B must retain its original byte length"
	.endif
	.globl gText_Rom_2EC269
	.set gText_Rom_2EC269, gText_Rom_2EC25B + 0xe

	@ src/data/abilities.h:237 abilities_line_237
	.globl gText_Rom_2EC26E
gText_Rom_2EC26E: @ 0x082EC26E
	.string "ひっこむと いじょうが なおる$"
	.if (. - gText_Rom_2EC26E) > 0x10
	.error "gText_Rom_2EC26E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC26E) < 0x10
	.space 0x10 - (. - gText_Rom_2EC26E)
	.endif
	.incbin "baserom.gba", 0x2ec27e, 0x3

	@ src/data/abilities.h:244 abilities_line_244
	.globl gText_Rom_2EC281
gText_Rom_2EC281: @ 0x082EC281
	.string "でんきタイプの わざが じぶんにくる$"
	.if (. - gText_Rom_2EC281) > 0x13
	.error "gText_Rom_2EC281 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC281) < 0x13
	.space 0x13 - (. - gText_Rom_2EC281)
	.endif

	@ src/data/abilities.h:252 abilities_line_252
	.globl gText_Rom_2EC294
gText_Rom_2EC294: @ 0x082EC294
	.string "わざの ついかこうかが でやすい$"
	.if (. - gText_Rom_2EC294) > 0x11
	.error "gText_Rom_2EC294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC294) < 0x11
	.space 0x11 - (. - gText_Rom_2EC294)
	.endif
	.incbin "baserom.gba", 0x2ec2a5, 0x2

	@ src/data/abilities.h:259 abilities_line_259
	.globl gText_Rom_2EC2A7
gText_Rom_2EC2A7: @ 0x082EC2A7
	.string "あめのとき すばやさが はやくなる$"
	.if (. - gText_Rom_2EC2A7) > 0x12
	.error "gText_Rom_2EC2A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2A7) < 0x12
	.space 0x12 - (. - gText_Rom_2EC2A7)
	.endif
	.incbin "baserom.gba", 0x2ec2b9, 0x1

	@ src/data/abilities.h:266 abilities_line_266
	.globl gText_Rom_2EC2BA
gText_Rom_2EC2BA: @ 0x082EC2BA
	.string "はれのとき すばやさが はやくなる$"
	.if (. - gText_Rom_2EC2BA) > 0x12
	.error "gText_Rom_2EC2BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2BA) < 0x12
	.space 0x12 - (. - gText_Rom_2EC2BA)
	.endif
	.incbin "baserom.gba", 0x2ec2cc, 0x1

	@ src/data/abilities.h:273 abilities_line_273
	.globl gText_Rom_2EC2CD
gText_Rom_2EC2CD: @ 0x082EC2CD
	.string "ポケモンに そうぐう しやすくなる$"
	.if (. - gText_Rom_2EC2CD) > 0x12
	.error "gText_Rom_2EC2CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2CD) < 0x12
	.space 0x12 - (. - gText_Rom_2EC2CD)
	.endif
	.incbin "baserom.gba", 0x2ec2df, 0x1

	@ src/data/abilities.h:281 abilities_line_281
	.globl gText_Rom_2EC2E0
gText_Rom_2EC2E0: @ 0x082EC2E0
	.string "あいてと おなじ とくせいになる$"
	.if (. - gText_Rom_2EC2E0) > 0x11
	.error "gText_Rom_2EC2E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2E0) < 0x11
	.space 0x11 - (. - gText_Rom_2EC2E0)
	.endif
	.incbin "baserom.gba", 0x2ec2f1, 0x2

	@ src/data/abilities.h:290 abilities_line_290 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC2F3
gText_Rom_2EC2F3: @ 0x082EC2F3
	.string "こうげきりょくが たかい$"
	.if (. - gText_Rom_2EC2F3) != 0xd
	.error "gText_Rom_2EC2F3 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC2FC
	.set gText_Rom_2EC2FC, gText_Rom_2EC2F3 + 0x9
	.incbin "baserom.gba", 0x2ec300, 0x6

	@ src/data/abilities.h:297 abilities_line_297
	.globl gText_Rom_2EC306
gText_Rom_2EC306: @ 0x082EC306
	.string "さわったあいてに どくをあたえる$"
	.if (. - gText_Rom_2EC306) > 0x11
	.error "gText_Rom_2EC306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC306) < 0x11
	.space 0x11 - (. - gText_Rom_2EC306)
	.endif
	.incbin "baserom.gba", 0x2ec317, 0x2

	@ src/data/abilities.h:304 abilities_line_304
	.globl gText_Rom_2EC319
gText_Rom_2EC319: @ 0x082EC319
	.string "ひるまない$"
	.if (. - gText_Rom_2EC319) > 0x6
	.error "gText_Rom_2EC319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC319) < 0x6
	.space 0x6 - (. - gText_Rom_2EC319)
	.endif
	.incbin "baserom.gba", 0x2ec31f, 0xd

	@ src/data/abilities.h:312 abilities_line_312
	.globl gText_Rom_2EC32C
gText_Rom_2EC32C: @ 0x082EC32C
	.string "こおり じょうたいに ならない$"
	.if (. - gText_Rom_2EC32C) > 0x10
	.error "gText_Rom_2EC32C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC32C) < 0x10
	.space 0x10 - (. - gText_Rom_2EC32C)
	.endif
	.incbin "baserom.gba", 0x2ec33c, 0x3

	@ src/data/abilities.h:320 abilities_line_320
	.globl gText_Rom_2EC33F
gText_Rom_2EC33F: @ 0x082EC33F
	.string "やけど じょうたいに ならない$"
	.if (. - gText_Rom_2EC33F) > 0x10
	.error "gText_Rom_2EC33F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC33F) < 0x10
	.space 0x10 - (. - gText_Rom_2EC33F)
	.endif
	.incbin "baserom.gba", 0x2ec34f, 0x3

	@ src/data/abilities.h:328 abilities_line_328
	.globl gText_Rom_2EC352
gText_Rom_2EC352: @ 0x082EC352
	.string "はがねタイプが にげられなくなる$"
	.if (. - gText_Rom_2EC352) > 0x11
	.error "gText_Rom_2EC352 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC352) < 0x11
	.space 0x11 - (. - gText_Rom_2EC352)
	.endif
	.incbin "baserom.gba", 0x2ec363, 0x2

	@ src/data/abilities.h:335 abilities_line_335
	.globl gText_Rom_2EC365
gText_Rom_2EC365: @ 0x082EC365
	.string "おとの わざを うけない$"
	.if (. - gText_Rom_2EC365) > 0xd
	.error "gText_Rom_2EC365 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC365) < 0xd
	.space 0xd - (. - gText_Rom_2EC365)
	.endif
	.incbin "baserom.gba", 0x2ec372, 0x6

	@ src/data/abilities.h:343 abilities_line_343
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC378
gText_Rom_2EC378: @ 0x082EC378
	.string "あめのとき すこしずつ かいふく$"
	.if (. - gText_Rom_2EC378) != 0x11
	.error "gText_Rom_2EC378 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC384
	.set gText_Rom_2EC384, gText_Rom_2EC378 + 0xc
	.incbin "baserom.gba", 0x2ec389, 0x2

	@ src/data/abilities.h:350 abilities_line_350
	.globl gText_Rom_2EC38B
gText_Rom_2EC38B: @ 0x082EC38B
	.string "せんとうで すなあらしを おこす$"
	.if (. - gText_Rom_2EC38B) > 0x11
	.error "gText_Rom_2EC38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC38B) < 0x11
	.space 0x11 - (. - gText_Rom_2EC38B)
	.endif
	.incbin "baserom.gba", 0x2ec39c, 0x2

	@ src/data/abilities.h:357 abilities_line_357
	.globl gText_Rom_2EC39E
gText_Rom_2EC39E: @ 0x082EC39E
	.string "あいての PPが へりやすくなる$"
	.if (. - gText_Rom_2EC39E) > 0x11
	.error "gText_Rom_2EC39E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC39E) < 0x11
	.space 0x11 - (. - gText_Rom_2EC39E)
	.endif
	.incbin "baserom.gba", 0x2ec3af, 0x2

	@ src/data/abilities.h:364 abilities_line_364
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC3B1
gText_Rom_2EC3B1: @ 0x082EC3B1
	.string "ほのお こおりに つよい$"
	.if (. - gText_Rom_2EC3B1) != 0xd
	.error "gText_Rom_2EC3B1 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC3BA
	.set gText_Rom_2EC3BA, gText_Rom_2EC3B1 + 0x9
	.incbin "baserom.gba", 0x2ec3be, 0x6

	@ src/data/abilities.h:372 abilities_line_372
	.globl gText_Rom_2EC3C4
gText_Rom_2EC3C4: @ 0x082EC3C4
	.string "おきるのが はやくなる$"
	.if (. - gText_Rom_2EC3C4) > 0xc
	.error "gText_Rom_2EC3C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC3C4) < 0xc
	.space 0xc - (. - gText_Rom_2EC3C4)
	.endif
	.incbin "baserom.gba", 0x2ec3d0, 0x7

	@ src/data/abilities.h:379 abilities_line_379
	.globl gText_Rom_2EC3D7
gText_Rom_2EC3D7: @ 0x082EC3D7
	.string "さわった あいてを やけど させる$"
	.if (. - gText_Rom_2EC3D7) > 0x12
	.error "gText_Rom_2EC3D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC3D7) < 0x12
	.space 0x12 - (. - gText_Rom_2EC3D7)
	.endif
	.incbin "baserom.gba", 0x2ec3e9, 0x1

	@ src/data/abilities.h:386 abilities_line_386
	.globl gText_Rom_2EC3EA
gText_Rom_2EC3EA: @ 0x082EC3EA
	.string "せんとうから にげやすい$"
	.if (. - gText_Rom_2EC3EA) > 0xd
	.error "gText_Rom_2EC3EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC3EA) < 0xd
	.space 0xd - (. - gText_Rom_2EC3EA)
	.endif
	.incbin "baserom.gba", 0x2ec3f7, 0x6

	@ src/data/abilities.h:393 abilities_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC3FD
gText_Rom_2EC3FD: @ 0x082EC3FD
	.string "あいてに めいちゅうを さげられない$"
	.if (. - gText_Rom_2EC3FD) != 0x13
	.error "gText_Rom_2EC3FD must retain its original byte length"
	.endif
	.globl gText_Rom_2EC40B
	.set gText_Rom_2EC40B, gText_Rom_2EC3FD + 0xe

	@ src/data/abilities.h:401 abilities_line_401
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC410
gText_Rom_2EC410: @ 0x082EC410
	.string "あいてに こうげきを さげられない$"
	.if (. - gText_Rom_2EC410) != 0x12
	.error "gText_Rom_2EC410 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC41D
	.set gText_Rom_2EC41D, gText_Rom_2EC410 + 0xd
	.incbin "baserom.gba", 0x2ec422, 0x1

	@ src/data/abilities.h:409 abilities_line_409
	.globl gText_Rom_2EC423
gText_Rom_2EC423: @ 0x082EC423
	.string "どうぐを ひろってくる ことがある$"
	.if (. - gText_Rom_2EC423) > 0x12
	.error "gText_Rom_2EC423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC423) < 0x12
	.space 0x12 - (. - gText_Rom_2EC423)
	.endif
	.incbin "baserom.gba", 0x2ec435, 0x1

	@ src/data/abilities.h:416 abilities_line_416
	.globl gText_Rom_2EC436
gText_Rom_2EC436: @ 0x082EC436
	.string "こうげきが れんぞくで だせない$"
	.if (. - gText_Rom_2EC436) > 0x11
	.error "gText_Rom_2EC436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC436) < 0x11
	.space 0x11 - (. - gText_Rom_2EC436)
	.endif
	.incbin "baserom.gba", 0x2ec447, 0x2

	@ src/data/abilities.h:424 abilities_line_424
	.globl gText_Rom_2EC449
gText_Rom_2EC449: @ 0x082EC449
	.string "こうげきは たかいが はずれやすい$"
	.if (. - gText_Rom_2EC449) > 0x12
	.error "gText_Rom_2EC449 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC449) < 0x12
	.space 0x12 - (. - gText_Rom_2EC449)
	.endif
	.incbin "baserom.gba", 0x2ec45b, 0x1

	@ src/data/abilities.h:431 abilities_line_431
	.globl gText_Rom_2EC45C
gText_Rom_2EC45C: @ 0x082EC45C
	.string "さわった あいてを メロメロにする$"
	.if (. - gText_Rom_2EC45C) > 0x12
	.error "gText_Rom_2EC45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC45C) < 0x12
	.space 0x12 - (. - gText_Rom_2EC45C)
	.endif
	.incbin "baserom.gba", 0x2ec46e, 0x1

	@ src/data/abilities.h:438 abilities_line_438
	.globl gText_Rom_2EC46F
gText_Rom_2EC46F: @ 0x082EC46F
	.string "マイナスが いると つよくなる$"
	.if (. - gText_Rom_2EC46F) > 0x10
	.error "gText_Rom_2EC46F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC46F) < 0x10
	.space 0x10 - (. - gText_Rom_2EC46F)
	.endif
	.incbin "baserom.gba", 0x2ec47f, 0x3

	@ src/data/abilities.h:445 abilities_line_445
	.globl gText_Rom_2EC482
gText_Rom_2EC482: @ 0x082EC482
	.string "プラスが いると つよくなる$"
	.if (. - gText_Rom_2EC482) > 0xf
	.error "gText_Rom_2EC482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC482) < 0xf
	.space 0xf - (. - gText_Rom_2EC482)
	.endif
	.incbin "baserom.gba", 0x2ec491, 0x4

	@ src/data/abilities.h:452 abilities_line_452
	.globl gText_Rom_2EC495
gText_Rom_2EC495: @ 0x082EC495
	.string "てんきで ポワルンが へんかする$"
	.if (. - gText_Rom_2EC495) > 0x11
	.error "gText_Rom_2EC495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC495) < 0x11
	.space 0x11 - (. - gText_Rom_2EC495)
	.endif
	.incbin "baserom.gba", 0x2ec4a6, 0x2

	@ src/data/abilities.h:462 abilities_line_462
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC4A8
gText_Rom_2EC4A8: @ 0x082EC4A8
	.string "どうぐを とられない$"
	.if (. - gText_Rom_2EC4A8) != 0xb
	.error "gText_Rom_2EC4A8 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC4AE
	.set gText_Rom_2EC4AE, gText_Rom_2EC4A8 + 0x6
	.incbin "baserom.gba", 0x2ec4b3, 0x8

	@ src/data/abilities.h:470 abilities_line_470
	.globl gText_Rom_2EC4BB
gText_Rom_2EC4BB: @ 0x082EC4BB
	.string "だっぴして からだを なおす$"
	.if (. - gText_Rom_2EC4BB) > 0xf
	.error "gText_Rom_2EC4BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4BB) < 0xf
	.space 0xf - (. - gText_Rom_2EC4BB)
	.endif
	.incbin "baserom.gba", 0x2ec4ca, 0x4

	@ src/data/abilities.h:477 abilities_line_477
	.globl gText_Rom_2EC4CE
gText_Rom_2EC4CE: @ 0x082EC4CE
	.string "いじょうのとき こうげきが あがる$"
	.if (. - gText_Rom_2EC4CE) > 0x12
	.error "gText_Rom_2EC4CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4CE) < 0x12
	.space 0x12 - (. - gText_Rom_2EC4CE)
	.endif
	.incbin "baserom.gba", 0x2ec4e0, 0x1

	@ src/data/abilities.h:484 abilities_line_484
	.globl gText_Rom_2EC4E1
gText_Rom_2EC4E1: @ 0x082EC4E1
	.string "いじょうのとき ぼうぎょが あがる$"
	.if (. - gText_Rom_2EC4E1) > 0x12
	.error "gText_Rom_2EC4E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4E1) < 0x12
	.space 0x12 - (. - gText_Rom_2EC4E1)
	.endif
	.incbin "baserom.gba", 0x2ec4f3, 0x1

	@ src/data/abilities.h:492 abilities_line_492
	.globl gText_Rom_2EC4F4
gText_Rom_2EC4F4: @ 0x082EC4F4
	.string "すいとると たいりょくが へる$"
	.if (. - gText_Rom_2EC4F4) > 0x10
	.error "gText_Rom_2EC4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4F4) < 0x10
	.space 0x10 - (. - gText_Rom_2EC4F4)
	.endif
	.incbin "baserom.gba", 0x2ec504, 0x3

	@ src/data/abilities.h:499 abilities_line_499
	.globl gText_Rom_2EC507
gText_Rom_2EC507: @ 0x082EC507
	.string "ピンチに くさの いりょくが あがる$"
	.if (. - gText_Rom_2EC507) > 0x13
	.error "gText_Rom_2EC507 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC507) < 0x13
	.space 0x13 - (. - gText_Rom_2EC507)
	.endif

	@ src/data/abilities.h:506 abilities_line_506
	.globl gText_Rom_2EC51A
gText_Rom_2EC51A: @ 0x082EC51A
	.string "ピンチに ほのおが つよくなる$"
	.if (. - gText_Rom_2EC51A) > 0x10
	.error "gText_Rom_2EC51A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC51A) < 0x10
	.space 0x10 - (. - gText_Rom_2EC51A)
	.endif
	.incbin "baserom.gba", 0x2ec52a, 0x3

	@ src/data/abilities.h:513 abilities_line_513
	.globl gText_Rom_2EC52D
gText_Rom_2EC52D: @ 0x082EC52D
	.string "ピンチに みずの いりょくが あがる$"
	.if (. - gText_Rom_2EC52D) > 0x13
	.error "gText_Rom_2EC52D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC52D) < 0x13
	.space 0x13 - (. - gText_Rom_2EC52D)
	.endif

	@ src/data/abilities.h:520 abilities_line_520
	.globl gText_Rom_2EC540
gText_Rom_2EC540: @ 0x082EC540
	.string "ピンチに むしの いりょくが あがる$"
	.if (. - gText_Rom_2EC540) > 0x13
	.error "gText_Rom_2EC540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC540) < 0x13
	.space 0x13 - (. - gText_Rom_2EC540)
	.endif

	@ src/data/abilities.h:527 abilities_line_527
	.globl gText_Rom_2EC553
gText_Rom_2EC553: @ 0x082EC553
	.string "ぶつかっても はんどうを うけない$"
	.if (. - gText_Rom_2EC553) > 0x12
	.error "gText_Rom_2EC553 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC553) < 0x12
	.space 0x12 - (. - gText_Rom_2EC553)
	.endif
	.incbin "baserom.gba", 0x2ec565, 0x1

	@ src/data/abilities.h:534 abilities_line_534 (+1 aliases)
	.globl gText_Rom_2EC566
gText_Rom_2EC566: @ 0x082EC566
	.string "せんとうで ひざしを つよくする$"
	.if (. - gText_Rom_2EC566) > 0x11
	.error "gText_Rom_2EC566 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC566) < 0x11
	.space 0x11 - (. - gText_Rom_2EC566)
	.endif
	.incbin "baserom.gba", 0x2ec577, 0x2

	@ src/data/abilities.h:183 abilities_line_183 (+1 aliases)
	.globl gText_Rom_2EC579
gText_Rom_2EC579: @ 0x082EC579
	.string "あいてを にげられなくする$"
	.if (. - gText_Rom_2EC579) > 0xe
	.error "gText_Rom_2EC579 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC579) < 0xe
	.space 0xe - (. - gText_Rom_2EC579)
	.endif
	.incbin "baserom.gba", 0x2ec587, 0x5

	@ src/data/abilities.h:548 abilities_line_548
	.globl gText_Rom_2EC58C
gText_Rom_2EC58C: @ 0x082EC58C
	.string "ねむらない$"
	.if (. - gText_Rom_2EC58C) > 0x6
	.error "gText_Rom_2EC58C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC58C) < 0x6
	.space 0x6 - (. - gText_Rom_2EC58C)
	.endif
	.incbin "baserom.gba", 0x2ec592, 0xd

	@ src/data/abilities.h:229 abilities_line_229 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC59F
gText_Rom_2EC59F: @ 0x082EC59F
	.string "あいてに のうりょくを さげられない$"
	.if (. - gText_Rom_2EC59F) != 0x13
	.error "gText_Rom_2EC59F must retain its original byte length"
	.endif
	.globl gText_Rom_2EC5AD
	.set gText_Rom_2EC5AD, gText_Rom_2EC59F + 0xe

	@ src/data/abilities.h:290 abilities_line_290 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC5B2
gText_Rom_2EC5B2: @ 0x082EC5B2
	.string "こうげきりょくが たかい$"
	.if (. - gText_Rom_2EC5B2) != 0xd
	.error "gText_Rom_2EC5B2 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC5BB
	.set gText_Rom_2EC5BB, gText_Rom_2EC5B2 + 0x9
	.incbin "baserom.gba", 0x2ec5bf, 0x6

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gText_Rom_2EC5C5
gText_Rom_2EC5C5: @ 0x082EC5C5
	.string "わざを きゅうしょに うけない$"
	.if (. - gText_Rom_2EC5C5) > 0x10
	.error "gText_Rom_2EC5C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC5C5) < 0x10
	.space 0x10 - (. - gText_Rom_2EC5C5)
	.endif
	.incbin "baserom.gba", 0x2ec5d5, 0x3

	@ src/data/abilities.h:335 abilities_line_335
	.globl gText_Rom_2EC5D8
gText_Rom_2EC5D8: @ 0x082EC5D8
	.string "おとの わざを うけない$"
	.if (. - gText_Rom_2EC5D8) > 0xd
	.error "gText_Rom_2EC5D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC5D8) < 0xd
	.space 0xd - (. - gText_Rom_2EC5D8)
	.endif
	.incbin "baserom.gba", 0x2ec5e5, 0x6

	@ src/data/abilities.h:107 abilities_line_107 (+1 aliases)
	.globl gText_Rom_2EC5EB
gText_Rom_2EC5EB: @ 0x082EC5EB
	.string "てんきの えいきょうが なくなる$"
	.if (. - gText_Rom_2EC5EB) > 0x11
	.error "gText_Rom_2EC5EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC5EB) < 0x11
	.space 0x11 - (. - gText_Rom_2EC5EB)
	.endif
	.incbin "baserom.gba", 0x2ec5fc, 0x4
	.globl gUnknown_82EC600
gUnknown_82EC600: @ 0x082EC600
	.incbin "baserom.gba", 0x2ec600, 0x38
	.globl gUnknown_82EC638
gUnknown_82EC638: @ 0x082EC638
	.incbin "baserom.gba", 0x2ec638, 0x2c
	.globl gUnknown_82EC664
gUnknown_82EC664: @ 0x082EC664
	.incbin "baserom.gba", 0x2ec664, 0xf
	.globl gUnknown_82EC673
gUnknown_82EC673: @ 0x082EC673
	.incbin "baserom.gba", 0x2ec673, 0x4
	.globl gUnknown_82EC677
gUnknown_82EC677: @ 0x082EC677
	.incbin "baserom.gba", 0x2ec677, 0x5
	.globl gUnknown_82EC67C
gUnknown_82EC67C: @ 0x082EC67C
	.incbin "baserom.gba", 0x2ec67c, 0x18
	.globl gUnknown_82EC694
gUnknown_82EC694: @ 0x082EC694
	.incbin "baserom.gba", 0x2ec694, 0x3e4
	.globl gUnknown_82ECA78
gUnknown_82ECA78: @ 0x082ECA78
	.incbin "baserom.gba", 0x2eca78, 0x34
	.globl gUnknown_82ECAAC
gUnknown_82ECAAC: @ 0x082ECAAC
	.incbin "baserom.gba", 0x2ecaac, 0xc
	.globl gUnknown_82ECAB8
gUnknown_82ECAB8: @ 0x082ECAB8
	.incbin "baserom.gba", 0x2ecab8, 0xf0
	.globl gUnknown_82ECBA8
gUnknown_82ECBA8: @ 0x082ECBA8
	.incbin "baserom.gba", 0x2ecba8, 0xa4
	.globl gUnknown_82ECC4C
gUnknown_82ECC4C: @ 0x082ECC4C
	.incbin "baserom.gba", 0x2ecc4c, 0x20
	.globl gUnknown_82ECC6C
gUnknown_82ECC6C: @ 0x082ECC6C
	.incbin "baserom.gba", 0x2ecc6c, 0xd8
	.globl gUnknown_82ECD44
gUnknown_82ECD44: @ 0x082ECD44
	.incbin "baserom.gba", 0x2ecd44, 0x18
	.globl gUnknown_82ECD5C
gUnknown_82ECD5C: @ 0x082ECD5C
	.incbin "baserom.gba", 0x2ecd5c, 0x8
	.globl gUnknown_82ECD64
gUnknown_82ECD64: @ 0x082ECD64
	.incbin "baserom.gba", 0x2ecd64, 0x28
	.globl gUnknown_82ECD8C
gUnknown_82ECD8C: @ 0x082ECD8C
	.incbin "baserom.gba", 0x2ecd8c, 0xc
	.globl gUnknown_82ECD98
gUnknown_82ECD98: @ 0x082ECD98
	.incbin "baserom.gba", 0x2ecd98, 0x14
	.globl gUnknown_82ECDAC
gUnknown_82ECDAC: @ 0x082ECDAC
	.incbin "baserom.gba", 0x2ecdac, 0x18
	.globl gUnknown_82ECDC4
gUnknown_82ECDC4: @ 0x082ECDC4
	.incbin "baserom.gba", 0x2ecdc4, 0x24
	.globl gUnknown_82ECDE8
gUnknown_82ECDE8: @ 0x082ECDE8
	.incbin "baserom.gba", 0x2ecde8, 0x16
	.globl gUnknown_82ECDFE
gUnknown_82ECDFE: @ 0x082ECDFE
	.incbin "baserom.gba", 0x2ecdfe, 0x9
	.globl gUnknown_82ECE07
gUnknown_82ECE07: @ 0x082ECE07
	.incbin "baserom.gba", 0x2ece07, 0xa
	.globl gUnknown_82ECE11
gUnknown_82ECE11: @ 0x082ECE11
	.incbin "baserom.gba", 0x2ece11, 0x7
	.globl gUnknown_82ECE18
gUnknown_82ECE18: @ 0x082ECE18
	.incbin "baserom.gba", 0x2ece18, 0x64
	.globl gUnknown_82ECE7C
gUnknown_82ECE7C: @ 0x082ECE7C
	.incbin "baserom.gba", 0x2ece7c, 0x20
	.globl gUnknown_82ECE9C
gUnknown_82ECE9C: @ 0x082ECE9C
	.incbin "baserom.gba", 0x2ece9c, 0xe4
	.globl gUnknown_82ECF80
gUnknown_82ECF80: @ 0x082ECF80
	.incbin "baserom.gba", 0x2ecf80, 0xc
	.globl gUnknown_82ECF8C
gUnknown_82ECF8C: @ 0x082ECF8C
	.incbin "baserom.gba", 0x2ecf8c, 0x1c
	.globl gUnknown_82ECFA8
gUnknown_82ECFA8: @ 0x082ECFA8
	.incbin "baserom.gba", 0x2ecfa8, 0x8
	.globl gUnknown_82ECFB0
gUnknown_82ECFB0: @ 0x082ECFB0
	.incbin "baserom.gba", 0x2ecfb0, 0x60
	.globl gUnknown_82ED010
gUnknown_82ED010: @ 0x082ED010
	.incbin "baserom.gba", 0x2ed010, 0x18
	.globl gUnknown_82ED028
gUnknown_82ED028: @ 0x082ED028
	.incbin "baserom.gba", 0x2ed028, 0x10
	.globl gUnknown_82ED038
gUnknown_82ED038: @ 0x082ED038
	.incbin "baserom.gba", 0x2ed038, 0x18
	.globl gUnknown_82ED050
gUnknown_82ED050: @ 0x082ED050
	.incbin "baserom.gba", 0x2ed050, 0xec
	.globl gUnknown_82ED13C
gUnknown_82ED13C: @ 0x082ED13C
	.incbin "baserom.gba", 0x2ed13c, 0xe4

	.include "data/pokemon/battle_moves.inc"
	.incbin "baserom.gba", 0x2ee2c4, 0x10

	.globl gUnknown_82EE2D4
gUnknown_82EE2D4: @ 0x082EE2D4
	.incbin "baserom.gba", 0x2ee2d4, 0x336
	.globl gUnknown_82EE60A
gUnknown_82EE60A: @ 0x082EE60A
	.incbin "baserom.gba", 0x2ee60a, 0x336
	.globl gUnknown_82EE940
gUnknown_82EE940: @ 0x082EE940
	.incbin "baserom.gba", 0x2ee940, 0x338
	.globl gUnknown_82EEC78
gUnknown_82EEC78: @ 0x082EEC78
	.incbin "baserom.gba", 0x2eec78, 0x2
	.globl gUnknown_82EEC7A
gUnknown_82EEC7A: @ 0x082EEC7A
	.incbin "baserom.gba", 0x2eec7a, 0x29a
	.globl gUnknown_82EEF14
gUnknown_82EEF14: @ 0x082EEF14
	.incbin "baserom.gba", 0x2eef14, 0x28c
	.globl gUnknown_82EF1A0
gUnknown_82EF1A0: @ 0x082EF1A0
	.incbin "baserom.gba", 0x2ef1a0, 0x80
	.globl gUnknown_82EF220
gUnknown_82EF220: @ 0x082EF220
	.incbin "baserom.gba", 0x2ef220, 0xce0
	.globl gUnknown_82EFF00
gUnknown_82EFF00: @ 0x082EFF00
	.incbin "baserom.gba", 0x2eff00, 0x52
	.globl gUnknown_82EFF52
gUnknown_82EFF52: @ 0x082EFF52
	.incbin "baserom.gba", 0x2eff52, 0x52
	.globl gUnknown_82EFFA4
gUnknown_82EFFA4: @ 0x082EFFA4
	.incbin "baserom.gba", 0x2effa4, 0x110
	.globl gUnknown_82F00B4
gUnknown_82F00B4: @ 0x082F00B4
	.incbin "baserom.gba", 0x2f00b4, 0xca0
	.include "data/pokemon/base_stats.inc"

	.include "data/pokemon/level_up_learnsets.inc"

	.globl gUnknown_82F5CA4
gUnknown_82F5CA4: @ 0x082F5CA4
	.incbin "baserom.gba", 0x2f5ca4, 0x4060

	.include "data/pokemon/level_up_learnset_pointers.inc"

	.globl gUnknown_82FA374
gUnknown_82FA374: @ 0x082FA374
	.incbin "baserom.gba", 0x2fa374, 0x19b
	.globl gUnknown_82FA50F
gUnknown_82FA50F: @ 0x082FA50F
	.incbin "baserom.gba", 0x2fa50f, 0x19b
	.globl gUnknown_82FA6AA
gUnknown_82FA6AA: @ 0x082FA6AA
	.incbin "baserom.gba", 0x2fa6aa, 0x4
	.globl gUnknown_82FA6AE
gUnknown_82FA6AE: @ 0x082FA6AE
	.incbin "baserom.gba", 0x2fa6ae, 0x4
	.globl gUnknown_82FA6B2
gUnknown_82FA6B2: @ 0x082FA6B2
	.incbin "baserom.gba", 0x2fa6b2, 0x4
	.globl gUnknown_82FA6B6
gUnknown_82FA6B6: @ 0x082FA6B6
	.incbin "baserom.gba", 0x2fa6b6, 0x20
	.globl gUnknown_82FA6D6
gUnknown_82FA6D6: @ 0x082FA6D6
	.incbin "baserom.gba", 0x2fa6d6, 0xc
	.globl gUnknown_82FA6E2
gUnknown_82FA6E2: @ 0x082FA6E2
	.incbin "baserom.gba", 0x2fa6e2, 0x20
	.globl gUnknown_82FA702
gUnknown_82FA702: @ 0x082FA702
	.incbin "baserom.gba", 0x2fa702, 0x22
	.globl gUnknown_82FA724
gUnknown_82FA724: @ 0x082FA724
	.incbin "baserom.gba", 0x2fa724, 0x60
	.globl gUnknown_82FA784
gUnknown_82FA784: @ 0x082FA784
	.incbin "baserom.gba", 0x2fa784, 0xc0
	.globl gUnknown_82FA844
gUnknown_82FA844: @ 0x082FA844
	.incbin "baserom.gba", 0x2fa844, 0xa
	.globl gUnknown_82FA84E
gUnknown_82FA84E: @ 0x082FA84E
	.incbin "baserom.gba", 0x2fa84e, 0x6
	.globl gUnknown_82FA854
gUnknown_82FA854: @ 0x082FA854
	.incbin "baserom.gba", 0x2fa854, 0x6
	.globl gUnknown_82FA85A
gUnknown_82FA85A: @ 0x082FA85A
	.incbin "baserom.gba", 0x2fa85a, 0x1c
	.globl gUnknown_82FA876
gUnknown_82FA876: @ 0x082FA876
	.incbin "baserom.gba", 0x2fa876, 0x12
	.globl gUnknown_82FA888
gUnknown_82FA888: @ 0x082FA888
	.incbin "baserom.gba", 0x2fa888, 0x2
	.globl gUnknown_82FA88A
gUnknown_82FA88A: @ 0x082FA88A
	.incbin "baserom.gba", 0x2fa88a, 0x2a
	.globl gUnknown_82FA8B4
gUnknown_82FA8B4: @ 0x082FA8B4
	.incbin "baserom.gba", 0x2fa8b4, 0x18
	.globl gUnknown_82FA8CC
gUnknown_82FA8CC: @ 0x082FA8CC
	.incbin "baserom.gba", 0x2fa8cc, 0x280
	.globl gUnknown_82FAB4C
gUnknown_82FAB4C: @ 0x082FAB4C
	.incbin "baserom.gba", 0x2fab4c, 0x168
	.globl gUnknown_82FACB4
gUnknown_82FACB4: @ 0x082FACB4
	.incbin "baserom.gba", 0x2facb4, 0x80
	.globl gUnknown_82FAD34
gUnknown_82FAD34: @ 0x082FAD34
	.incbin "baserom.gba", 0x2fad34, 0x18
	.globl gUnknown_82FAD4C
gUnknown_82FAD4C: @ 0x082FAD4C
	.incbin "baserom.gba", 0x2fad4c, 0x18
	.globl gUnknown_82FAD64
gUnknown_82FAD64: @ 0x082FAD64
	.incbin "baserom.gba", 0x2fad64, 0xa00
	.globl gUnknown_82FB764
gUnknown_82FB764: @ 0x082FB764
	.incbin "baserom.gba", 0x2fb764, 0x8e8
	.globl gUnknown_82FC04C
gUnknown_82FC04C: @ 0x082FC04C
	.incbin "baserom.gba", 0x2fc04c, 0x20
	.globl gUnknown_82FC06C
gUnknown_82FC06C: @ 0x082FC06C
	.incbin "baserom.gba", 0x2fc06c, 0x18

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC084
gText_Rom_2FC084: @ 0x082FC084
	.string "2ひきの　なかは\nとっても　よい　ようじゃ$"
	.if (. - gText_Rom_2FC084) > 0x16
	.error "gText_Rom_2FC084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC084) < 0x16
	.space 0x16 - (. - gText_Rom_2FC084)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC09A
gText_Rom_2FC09A: @ 0x082FC09A
	.string "2ひきの　なかは\nまずまずの　ようじゃ$"
	.if (. - gText_Rom_2FC09A) > 0x14
	.error "gText_Rom_2FC09A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC09A) < 0x14
	.space 0x14 - (. - gText_Rom_2FC09A)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0AE
gText_Rom_2FC0AE: @ 0x082FC0AE
	.string "2ひきの　なかは\nそれほど　よくないがなぁ$"
	.if (. - gText_Rom_2FC0AE) > 0x16
	.error "gText_Rom_2FC0AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0AE) < 0x16
	.space 0x16 - (. - gText_Rom_2FC0AE)
	.endif

	@ asm/daycare.s:2681 SetDaycareCompatibilityString (+1 aliases)
	.globl gText_Rom_2FC0C4
gText_Rom_2FC0C4: @ 0x082FC0C4
	.string "2ひきは　おたがいに\nちがう　ポケモンたちと\lあそんでおるがなあ$"
	.if (. - gText_Rom_2FC0C4) > 0x21
	.error "gText_Rom_2FC0C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0C4) < 0x21
	.space 0x21 - (. - gText_Rom_2FC0C4)
	.endif
	.incbin "baserom.gba", 0x2fc0e5, 0x3
	.globl gUnknown_82FC0E8
gUnknown_82FC0E8: @ 0x082FC0E8
	.incbin "baserom.gba", 0x2fc0e8, 0x10
	.globl gUnknown_82FC0F8
gUnknown_82FC0F8: @ 0x082FC0F8
	.incbin "baserom.gba", 0x2fc0f8, 0x2
	.globl gUnknown_82FC0FA
gUnknown_82FC0FA: @ 0x082FC0FA

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2FC0FA
gText_Rom_2FC0FA: @ 0x082FC0FA
	.string "やめる$"
	.if (. - gText_Rom_2FC0FA) > 0x4
	.error "gText_Rom_2FC0FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2FC0FA) < 0x4
	.space 0x4 - (. - gText_Rom_2FC0FA)
	.endif
	.globl gUnknown_82FC0FE
gUnknown_82FC0FE: @ 0x082FC0FE
	.incbin "baserom.gba", 0x2fc0fe, 0x8de
	.globl gUnknown_82FC9DC
gUnknown_82FC9DC: @ 0x082FC9DC
	.incbin "baserom.gba", 0x2fc9dc, 0x8
	.globl gUnknown_82FC9E4
gUnknown_82FC9E4: @ 0x082FC9E4
	.incbin "baserom.gba", 0x2fc9e4, 0x8
	.globl gUnknown_82FC9EC
gUnknown_82FC9EC: @ 0x082FC9EC
	.incbin "baserom.gba", 0x2fc9ec, 0x8
	.globl gUnknown_82FC9F4
gUnknown_82FC9F4: @ 0x082FC9F4
	.incbin "baserom.gba", 0x2fc9f4, 0x50
	.globl gUnknown_82FCA44
gUnknown_82FCA44: @ 0x082FCA44
	.incbin "baserom.gba", 0x2fca44, 0x18
	.globl gUnknown_82FCA5C
gUnknown_82FCA5C: @ 0x082FCA5C
	.incbin "baserom.gba", 0x2fca5c, 0x8
	.globl gUnknown_82FCA64
gUnknown_82FCA64: @ 0x082FCA64
	.incbin "baserom.gba", 0x2fca64, 0x10
	.globl gUnknown_82FCA74
gUnknown_82FCA74: @ 0x082FCA74
	.incbin "baserom.gba", 0x2fca74, 0x8
	.globl gUnknown_82FCA7C
gUnknown_82FCA7C: @ 0x082FCA7C
	.incbin "baserom.gba", 0x2fca7c, 0x4c
	.globl gUnknown_82FCAC8
gUnknown_82FCAC8: @ 0x082FCAC8
	.incbin "baserom.gba", 0x2fcac8, 0x8
	.globl gUnknown_82FCAD0
gUnknown_82FCAD0: @ 0x082FCAD0
	.incbin "baserom.gba", 0x2fcad0, 0x8
	.globl gUnknown_82FCAD8
gUnknown_82FCAD8: @ 0x082FCAD8
	.incbin "baserom.gba", 0x2fcad8, 0x8
	.globl gUnknown_82FCAE0
gUnknown_82FCAE0: @ 0x082FCAE0
	.incbin "baserom.gba", 0x2fcae0, 0x8
	.globl gUnknown_82FCAE8
gUnknown_82FCAE8: @ 0x082FCAE8
	.incbin "baserom.gba", 0x2fcae8, 0x8
	.globl gUnknown_82FCAF0
gUnknown_82FCAF0: @ 0x082FCAF0
	.incbin "baserom.gba", 0x2fcaf0, 0x8
	.globl gUnknown_82FCAF8
gUnknown_82FCAF8: @ 0x082FCAF8
	.incbin "baserom.gba", 0x2fcaf8, 0x8
	.globl gUnknown_82FCB00
gUnknown_82FCB00: @ 0x082FCB00
	.incbin "baserom.gba", 0x2fcb00, 0x20
	.globl gUnknown_82FCB20
gUnknown_82FCB20: @ 0x082FCB20
	.incbin "baserom.gba", 0x2fcb20, 0x18
	.globl gUnknown_82FCB38
gUnknown_82FCB38: @ 0x082FCB38
	.incbin "baserom.gba", 0x2fcb38, 0x30
	.globl gUnknown_82FCB68
gUnknown_82FCB68: @ 0x082FCB68
	.incbin "baserom.gba", 0x2fcb68, 0x30
	.globl gUnknown_82FCB98
gUnknown_82FCB98: @ 0x082FCB98
	.incbin "baserom.gba", 0x2fcb98, 0x20
	.globl gUnknown_82FCBB8
gUnknown_82FCBB8: @ 0x082FCBB8
	.incbin "baserom.gba", 0x2fcbb8, 0xcc
	.globl gUnknown_82FCC84
gUnknown_82FCC84: @ 0x082FCC84
	.incbin "baserom.gba", 0x2fcc84, 0x38
	.globl gUnknown_82FCCBC
gUnknown_82FCCBC: @ 0x082FCCBC
	.incbin "baserom.gba", 0x2fccbc, 0x8
	.globl gUnknown_82FCCC4
gUnknown_82FCCC4: @ 0x082FCCC4
	.incbin "baserom.gba", 0x2fccc4, 0x68
	.globl gUnknown_82FCD2C
gUnknown_82FCD2C: @ 0x082FCD2C
	.incbin "baserom.gba", 0x2fcd2c, 0x8
	.globl gUnknown_82FCD34
gUnknown_82FCD34: @ 0x082FCD34
	.incbin "baserom.gba", 0x2fcd34, 0x8
	.globl gUnknown_82FCD3C
gUnknown_82FCD3C: @ 0x082FCD3C
	.incbin "baserom.gba", 0x2fcd3c, 0x8
	.globl gUnknown_82FCD44
gUnknown_82FCD44: @ 0x082FCD44
	.incbin "baserom.gba", 0x2fcd44, 0x18
	.globl gUnknown_82FCD5C
gUnknown_82FCD5C: @ 0x082FCD5C
	.incbin "baserom.gba", 0x2fcd5c, 0x30
	.globl gUnknown_82FCD8C
gUnknown_82FCD8C: @ 0x082FCD8C
	.incbin "baserom.gba", 0x2fcd8c, 0x30
	.globl gUnknown_82FCDBC
gUnknown_82FCDBC: @ 0x082FCDBC
	.incbin "baserom.gba", 0x2fcdbc, 0x1e
	.globl gUnknown_82FCDDA
gUnknown_82FCDDA: @ 0x082FCDDA
	.incbin "baserom.gba", 0x2fcdda, 0x14
	.globl gUnknown_82FCDEE
gUnknown_82FCDEE: @ 0x082FCDEE
	.incbin "baserom.gba", 0x2fcdee, 0x14
	.globl gUnknown_82FCE02
gUnknown_82FCE02: @ 0x082FCE02
	.incbin "baserom.gba", 0x2fce02, 0xa
	.globl gUnknown_82FCE0C
gUnknown_82FCE0C: @ 0x082FCE0C
	.incbin "baserom.gba", 0x2fce0c, 0x60
	.globl gUnknown_82FCE6C
gUnknown_82FCE6C: @ 0x082FCE6C
	.incbin "baserom.gba", 0x2fce6c, 0x128
	.globl gUnknown_82FCF94
gUnknown_82FCF94: @ 0x082FCF94
	.incbin "baserom.gba", 0x2fcf94, 0x138
	.globl gUnknown_82FD0CC
gUnknown_82FD0CC: @ 0x082FD0CC
	.incbin "baserom.gba", 0x2fd0cc, 0x80
	.globl gUnknown_82FD14C
gUnknown_82FD14C: @ 0x082FD14C
	.incbin "baserom.gba", 0x2fd14c, 0x1280
	.globl gUnknown_82FE3CC
gUnknown_82FE3CC: @ 0x082FE3CC
	.incbin "baserom.gba", 0x2fe3cc, 0x800
	.globl gUnknown_82FEBCC
gUnknown_82FEBCC: @ 0x082FEBCC
	.incbin "baserom.gba", 0x2febcc, 0x1fe
	.globl gUnknown_82FEDCA
gUnknown_82FEDCA: @ 0x082FEDCA
	.incbin "baserom.gba", 0x2fedca, 0x1fe
	.globl gUnknown_82FEFC8
gUnknown_82FEFC8: @ 0x082FEFC8
	.incbin "baserom.gba", 0x2fefc8, 0x800
	.globl gUnknown_82FF7C8
gUnknown_82FF7C8: @ 0x082FF7C8
	.incbin "baserom.gba", 0x2ff7c8, 0x800
	.globl gUnknown_82FFFC8
gUnknown_82FFFC8: @ 0x082FFFC8
	.incbin "baserom.gba", 0x2fffc8, 0x86c
	.globl gUnknown_8300834
gUnknown_8300834: @ 0x08300834
	.incbin "baserom.gba", 0x300834, 0x8
	.globl gUnknown_830083C
gUnknown_830083C: @ 0x0830083C
	.incbin "baserom.gba", 0x30083c, 0x50
	.globl gUnknown_830088C
gUnknown_830088C: @ 0x0830088C
	.incbin "baserom.gba", 0x30088c, 0x18
	.globl gUnknown_83008A4
gUnknown_83008A4: @ 0x083008A4
	.incbin "baserom.gba", 0x3008a4, 0x38
	.globl gUnknown_83008DC
gUnknown_83008DC: @ 0x083008DC
	.incbin "baserom.gba", 0x3008dc, 0x8
	.globl gUnknown_83008E4
gUnknown_83008E4: @ 0x083008E4
	.incbin "baserom.gba", 0x3008e4, 0x138
	.globl gUnknown_8300A1C
gUnknown_8300A1C: @ 0x08300A1C
	.incbin "baserom.gba", 0x300a1c, 0x1a
	.globl gUnknown_8300A36
gUnknown_8300A36: @ 0x08300A36
	.incbin "baserom.gba", 0x300a36, 0x18
	.globl gUnknown_8300A4E
gUnknown_8300A4E: @ 0x08300A4E
	.incbin "baserom.gba", 0x300a4e, 0x3c
	.globl gUnknown_8300A8A
gUnknown_8300A8A: @ 0x08300A8A
	.incbin "baserom.gba", 0x300a8a, 0xb
	.globl gUnknown_8300A95
gUnknown_8300A95: @ 0x08300A95
	.incbin "baserom.gba", 0x300a95, 0x2
	.globl gUnknown_8300A97
gUnknown_8300A97: @ 0x08300A97
	.incbin "baserom.gba", 0x300a97, 0x2
	.globl gUnknown_8300A99
gUnknown_8300A99: @ 0x08300A99
	.incbin "baserom.gba", 0x300a99, 0x2
	.globl gUnknown_8300A9B
gUnknown_8300A9B: @ 0x08300A9B
	.incbin "baserom.gba", 0x300a9b, 0x3
	.globl gUnknown_8300A9E
gUnknown_8300A9E: @ 0x08300A9E
	.incbin "baserom.gba", 0x300a9e, 0x2
	.globl gUnknown_8300AA0
gUnknown_8300AA0: @ 0x08300AA0

	@ asm/trade.s:5088 sub_0807946C
	.globl gText_Rom_300AA0
gText_Rom_300AA0: @ 0x08300AA0
	.string "/$"
	.if (. - gText_Rom_300AA0) > 0x2
	.error "gText_Rom_300AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA0) < 0x2
	.space 0x2 - (. - gText_Rom_300AA0)
	.endif
	.globl gUnknown_8300AA2
gUnknown_8300AA2: @ 0x08300AA2

	@ asm/trade.s:5098 sub_0807946C
	.globl gText_Rom_300AA2
gText_Rom_300AA2: @ 0x08300AA2
	.string "Lv$"
	.if (. - gText_Rom_300AA2) > 0x3
	.error "gText_Rom_300AA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA2) < 0x3
	.space 0x3 - (. - gText_Rom_300AA2)
	.endif
	.globl gUnknown_8300AA5
gUnknown_8300AA5: @ 0x08300AA5

	@ src/data/easy_chat/easy_chat_group_voices.h:52 easy_chat_group_voices_line_52 (+3 aliases)
	.globl gText_Rom_300AA5
gText_Rom_300AA5: @ 0x08300AA5
	.string "ーーー$"
	.if (. - gText_Rom_300AA5) > 0x4
	.error "gText_Rom_300AA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA5) < 0x4
	.space 0x4 - (. - gText_Rom_300AA5)
	.endif
	.globl gUnknown_8300AA9
gUnknown_8300AA9: @ 0x08300AA9

	@ asm/trade.s:5229 sub_08079564
	.globl gText_Rom_300AA9
gText_Rom_300AA9: @ 0x08300AA9
	.string "？？？？$"
	.if (. - gText_Rom_300AA9) > 0x5
	.error "gText_Rom_300AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AA9) < 0x5
	.space 0x5 - (. - gText_Rom_300AA9)
	.endif
	.globl gUnknown_8300AAE
gUnknown_8300AAE: @ 0x08300AAE

	@ asm/trade.s:2612 sub_08078120
	.globl gText_Rom_300AAE
gText_Rom_300AAE: @ 0x08300AAE
	.string "と　$"
	.if (. - gText_Rom_300AAE) > 0x3
	.error "gText_Rom_300AAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AAE) < 0x3
	.space 0x3 - (. - gText_Rom_300AAE)
	.endif
	.globl gUnknown_8300AB1
gUnknown_8300AB1: @ 0x08300AB1

	@ asm/trade.s:2618 sub_08078120
	.globl gText_Rom_300AB1
gText_Rom_300AB1: @ 0x08300AB1
	.string "を　こうかんしますか？$"
	.if (. - gText_Rom_300AB1) > 0xc
	.error "gText_Rom_300AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AB1) < 0xc
	.space 0xc - (. - gText_Rom_300AB1)
	.endif

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_300ABD
gText_Rom_300ABD: @ 0x08300ABD
	.string "やめる$"
	.if (. - gText_Rom_300ABD) > 0x4
	.error "gText_Rom_300ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300ABD) < 0x4
	.space 0x4 - (. - gText_Rom_300ABD)
	.endif

	@ src/strings.c:305 gText_ChoosePokemon
	.globl gText_Rom_300AC1
gText_Rom_300AC1: @ 0x08300AC1
	.string "ポケモンを えらんで ください$"
	.if (. - gText_Rom_300AC1) > 0x10
	.error "gText_Rom_300AC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AC1) < 0x10
	.space 0x10 - (. - gText_Rom_300AC1)
	.endif

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_300AD1
gText_Rom_300AD1: @ 0x08300AD1
	.string "つよさをみる$"
	.if (. - gText_Rom_300AD1) > 0x7
	.error "gText_Rom_300AD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AD1) < 0x7
	.space 0x7 - (. - gText_Rom_300AD1)
	.endif
	.incbin "baserom.gba", 0x300ad8, 0x16

	@ src/data/trade.h:49 sJPText_PressBButtonToQuit
	.globl gText_Rom_300AEE
gText_Rom_300AEE: @ 0x08300AEE
	.string "Bボタン で もどります$"
	.if (. - gText_Rom_300AEE) > 0xd
	.error "gText_Rom_300AEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AEE) < 0xd
	.space 0xd - (. - gText_Rom_300AEE)
	.endif
	.incbin "baserom.gba", 0x300afb, 0x1
	.globl gUnknown_8300AFC
gUnknown_8300AFC: @ 0x08300AFC
	.incbin "baserom.gba", 0x300afc, 0x2c
	.globl gUnknown_8300B28
gUnknown_8300B28: @ 0x08300B28
	.incbin "baserom.gba", 0x300b28, 0x10

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B38
gText_Rom_300B38: @ 0x08300B38
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}つうしんたいきちゅう！\nしばらくおまちください$"
	.if (. - gText_Rom_300B38) > 0x21
	.error "gText_Rom_300B38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B38) < 0x21
	.space 0x21 - (. - gText_Rom_300B38)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B59
gText_Rom_300B59: @ 0x08300B59
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}こうかんは\nキャンセル　されました！$"
	.if (. - gText_Rom_300B59) > 0x1c
	.error "gText_Rom_300B59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B59) < 0x1c
	.space 0x1c - (. - gText_Rom_300B59)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_300B75
gText_Rom_300B75: @ 0x08300B75
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！$"
	.if (. - gText_Rom_300B75) != 0x29
	.error "gText_Rom_300B75 must retain its original byte length"
	.endif
	.globl gText_Rom_300B7E
	.set gText_Rom_300B7E, gText_Rom_300B75 + 0x9

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B9E
gText_Rom_300B9E: @ 0x08300B9E
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}ともだちの　しゅうりょうを\nまっています……$"
	.if (. - gText_Rom_300B9E) > 0x20
	.error "gText_Rom_300B9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B9E) < 0x20
	.space 0x20 - (. - gText_Rom_300B9E)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300BBE
gText_Rom_300BBE: @ 0x08300BBE
	.string "ともだちは　ポケモンの\nこうかんを　したいようです！$"
	.if (. - gText_Rom_300BBE) > 0x1b
	.error "gText_Rom_300BBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300BBE) < 0x1b
	.space 0x1b - (. - gText_Rom_300BBE)
	.endif
	.incbin "baserom.gba", 0x300bd9, 0x3
	.globl gUnknown_8300BDC
gUnknown_8300BDC: @ 0x08300BDC
	.incbin "baserom.gba", 0x300bdc, 0x24
	.globl gUnknown_8300C00
gUnknown_8300C00: @ 0x08300C00
	.incbin "baserom.gba", 0x300c00, 0x4
	.globl gUnknown_8300C04
gUnknown_8300C04: @ 0x08300C04
	.incbin "baserom.gba", 0x300c04, 0x10
	.globl gUnknown_8300C14
gUnknown_8300C14: @ 0x08300C14
	.incbin "baserom.gba", 0x300c14, 0x98
	.globl gUnknown_8300CAC
gUnknown_8300CAC: @ 0x08300CAC
	.incbin "baserom.gba", 0x300cac, 0x94
	.globl gUnknown_8300D40
gUnknown_8300D40: @ 0x08300D40
	.incbin "baserom.gba", 0x300d40, 0x2024
	.globl gUnknown_8302D64
gUnknown_8302D64: @ 0x08302D64
	.incbin "baserom.gba", 0x302d64, 0x1fa0
	.globl gUnknown_8304D04
gUnknown_8304D04: @ 0x08304D04
	.incbin "baserom.gba", 0x304d04, 0x1020
	.globl gUnknown_8305D24
gUnknown_8305D24: @ 0x08305D24
	.incbin "baserom.gba", 0x305d24, 0x60
	.globl gUnknown_8305D84
gUnknown_8305D84: @ 0x08305D84
	.incbin "baserom.gba", 0x305d84, 0x1420
	.globl gUnknown_83071A4
gUnknown_83071A4: @ 0x083071A4
	.incbin "baserom.gba", 0x3071a4, 0x2840
	.globl gUnknown_83099E4
gUnknown_83099E4: @ 0x083099E4
	.incbin "baserom.gba", 0x3099e4, 0x100
	.globl gUnknown_8309AE4
gUnknown_8309AE4: @ 0x08309AE4
	.incbin "baserom.gba", 0x309ae4, 0x100
	.globl gUnknown_8309BE4
gUnknown_8309BE4: @ 0x08309BE4
	.incbin "baserom.gba", 0x309be4, 0x1000
	.globl gUnknown_830ABE4
gUnknown_830ABE4: @ 0x0830ABE4
	.incbin "baserom.gba", 0x30abe4, 0x1000
	.globl gUnknown_830BBE4
gUnknown_830BBE4: @ 0x0830BBE4
	.incbin "baserom.gba", 0x30bbe4, 0x100
	.globl gUnknown_830BCE4
gUnknown_830BCE4: @ 0x0830BCE4
	.incbin "baserom.gba", 0x30bce4, 0x200
	.globl gUnknown_830BEE4
gUnknown_830BEE4: @ 0x0830BEE4
	.incbin "baserom.gba", 0x30bee4, 0x200
	.globl gUnknown_830C0E4
gUnknown_830C0E4: @ 0x0830C0E4
	.incbin "baserom.gba", 0x30c0e4, 0x20
	.globl gUnknown_830C104
gUnknown_830C104: @ 0x0830C104
	.incbin "baserom.gba", 0x30c104, 0x690
	.globl gUnknown_830C794
gUnknown_830C794: @ 0x0830C794
	.incbin "baserom.gba", 0x30c794, 0x7c8
	.globl gUnknown_830CF5C
gUnknown_830CF5C: @ 0x0830CF5C
	.incbin "baserom.gba", 0x30cf5c, 0x8
	.globl gUnknown_830CF64
gUnknown_830CF64: @ 0x0830CF64
	.incbin "baserom.gba", 0x30cf64, 0x8
	.globl gUnknown_830CF6C
gUnknown_830CF6C: @ 0x0830CF6C
	.incbin "baserom.gba", 0x30cf6c, 0x48
	.globl gUnknown_830CFB4
gUnknown_830CFB4: @ 0x0830CFB4
	.incbin "baserom.gba", 0x30cfb4, 0x8
	.globl gUnknown_830CFBC
gUnknown_830CFBC: @ 0x0830CFBC
	.incbin "baserom.gba", 0x30cfbc, 0x8
	.globl gUnknown_830CFC4
gUnknown_830CFC4: @ 0x0830CFC4
	.incbin "baserom.gba", 0x30cfc4, 0x8
	.globl gUnknown_830CFCC
gUnknown_830CFCC: @ 0x0830CFCC
	.incbin "baserom.gba", 0x30cfcc, 0x38
	.globl gUnknown_830D004
gUnknown_830D004: @ 0x0830D004
	.incbin "baserom.gba", 0x30d004, 0x8
	.globl gUnknown_830D00C
gUnknown_830D00C: @ 0x0830D00C
	.incbin "baserom.gba", 0x30d00c, 0x2c
	.globl gUnknown_830D038
gUnknown_830D038: @ 0x0830D038
	.incbin "baserom.gba", 0x30d038, 0x8
	.globl gUnknown_830D040
gUnknown_830D040: @ 0x0830D040
	.incbin "baserom.gba", 0x30d040, 0x70
	.globl gUnknown_830D0B0
gUnknown_830D0B0: @ 0x0830D0B0
	.incbin "baserom.gba", 0x30d0b0, 0x8
	.globl gUnknown_830D0B8
gUnknown_830D0B8: @ 0x0830D0B8
	.incbin "baserom.gba", 0x30d0b8, 0x18
	.globl gUnknown_830D0D0
gUnknown_830D0D0: @ 0x0830D0D0
	.incbin "baserom.gba", 0x30d0d0, 0x18
	.globl gUnknown_830D0E8
gUnknown_830D0E8: @ 0x0830D0E8
	.incbin "baserom.gba", 0x30d0e8, 0x28
	.globl gUnknown_830D110
gUnknown_830D110: @ 0x0830D110
	.incbin "baserom.gba", 0x30d110, 0x4
	.globl gUnknown_830D114
gUnknown_830D114: @ 0x0830D114
	.incbin "baserom.gba", 0x30d114, 0xf0
	.globl gUnknown_830D204
gUnknown_830D204: @ 0x0830D204
	.incbin "baserom.gba", 0x30d204, 0x3c
	.globl gUnknown_830D240
gUnknown_830D240: @ 0x0830D240

	@ asm/trade.s:9631 sub_0807B624
	.globl gText_Rom_30D240
gText_Rom_30D240: @ 0x0830D240
	.string "{0xFD}{0x02}に\n{0xFD}{0x03}を　おくります！$"
	.if (. - gText_Rom_30D240) > 0xf
	.error "gText_Rom_30D240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D240) < 0xf
	.space 0xf - (. - gText_Rom_30D240)
	.endif
	.globl gUnknown_830D24F
gUnknown_830D24F: @ 0x0830D24F

	@ asm/trade.s:9700 sub_0807B624
	.globl gText_Rom_30D24F
gText_Rom_30D24F: @ 0x0830D24F
	.string "ばいばい　{0xFD}{0x03}！$"
	.if (. - gText_Rom_30D24F) > 0x9
	.error "gText_Rom_30D24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D24F) < 0x9
	.space 0x9 - (. - gText_Rom_30D24F)
	.endif
	.globl gUnknown_830D258
gUnknown_830D258: @ 0x0830D258

	@ asm/trade.s:11177 sub_0807B624
	.globl gText_Rom_30D258
gText_Rom_30D258: @ 0x0830D258
	.string "{0xFD}{0x02}から\n{0xFD}{0x04}が　おくられてきた！$"
	.if (. - gText_Rom_30D258) > 0x12
	.error "gText_Rom_30D258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D258) < 0x12
	.space 0x12 - (. - gText_Rom_30D258)
	.endif
	.globl gUnknown_830D26A
gUnknown_830D26A: @ 0x0830D26A

	@ asm/trade.s:11253 sub_0807B624
	.globl gText_Rom_30D26A
gText_Rom_30D26A: @ 0x0830D26A
	.string "{0xFD}{0x04}を　かわいがって　あげてね！$"
	.if (. - gText_Rom_30D26A) > 0x11
	.error "gText_Rom_30D26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30D26A) < 0x11
	.space 0x11 - (. - gText_Rom_30D26A)
	.endif
	.incbin "baserom.gba", 0x30d27b, 0x1
	.globl gUnknown_830D27C
gUnknown_830D27C: @ 0x0830D27C
	.incbin "baserom.gba", 0x30d27c, 0x10
	.globl gUnknown_830D28C
gUnknown_830D28C: @ 0x0830D28C
	.incbin "baserom.gba", 0x30d28c, 0x8
	.globl gUnknown_830D294
gUnknown_830D294: @ 0x0830D294
	.incbin "baserom.gba", 0x30d294, 0x10
	.globl gUnknown_830D2A4
gUnknown_830D2A4: @ 0x0830D2A4
	.incbin "baserom.gba", 0x30d2a4, 0x6c
	.globl gUnknown_830D310
gUnknown_830D310: @ 0x0830D310
	.incbin "baserom.gba", 0x30d310, 0x44
	.globl gUnknown_830D354
gUnknown_830D354: @ 0x0830D354
	.incbin "baserom.gba", 0x30d354, 0x20
	.globl gUnknown_830D374
gUnknown_830D374: @ 0x0830D374
	.incbin "baserom.gba", 0x30d374, 0x400
	.globl gUnknown_830D774
gUnknown_830D774: @ 0x0830D774
	.incbin "baserom.gba", 0x30d774, 0x1f04

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_30F678
gText_Rom_30F678: @ 0x0830F678
	.string "いいえ$"
	.if (. - gText_Rom_30F678) > 0x4
	.error "gText_Rom_30F678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F678) < 0x4
	.space 0x4 - (. - gText_Rom_30F678)
	.endif
	.incbin "baserom.gba", 0x30f67c, 0x32
	.globl gUnknown_830F6AE
gUnknown_830F6AE: @ 0x0830F6AE

	@ src/berry_blender.c:264 sText_BerryBlenderStart
	.globl gText_Rom_30F6AE
gText_Rom_30F6AE: @ 0x0830F6AE
	.string "きのみブレンダーを きどうします\pバッグから きのみブレンダーに いれる\nきのみを えらんでください\p$"
	.if (. - gText_Rom_30F6AE) > 0x34
	.error "gText_Rom_30F6AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F6AE) < 0x34
	.space 0x34 - (. - gText_Rom_30F6AE)
	.endif
	.incbin "baserom.gba", 0x30f6e2, 0x19
	.globl gUnknown_830F6FB
gUnknown_830F6FB: @ 0x0830F6FB
	.incbin "baserom.gba", 0x30f6fb, 0x2
	.globl gUnknown_830F6FD
gUnknown_830F6FD: @ 0x0830F6FD

	@ src/berry_blender.c:266 sText_WasMade
	.globl gText_Rom_30F6FD
gText_Rom_30F6FD: @ 0x0830F6FD
	.string " ができた！$"
	.if (. - gText_Rom_30F6FD) > 0x7
	.error "gText_Rom_30F6FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F6FD) < 0x7
	.space 0x7 - (. - gText_Rom_30F6FD)
	.endif
	.incbin "baserom.gba", 0x30f704, 0x1e

	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_30F722
gText_Rom_30F722: @ 0x0830F722
	.string "ヨシノリ$"
	.if (. - gText_Rom_30F722) > 0x5
	.error "gText_Rom_30F722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F722) < 0x5
	.space 0x5 - (. - gText_Rom_30F722)
	.endif
	.incbin "baserom.gba", 0x30f727, 0x26

	@ src/berry_blender.c:270 berry_blender_line_270
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F74D
gText_Rom_30F74D: @ 0x0830F74D
	.string " おじさん$"
	.if (. - gText_Rom_30F74D) != 0x6
	.error "gText_Rom_30F74D must retain its original byte length"
	.endif
	.globl gUnknown_830F74E
	.set gUnknown_830F74E, gText_Rom_30F74D + 0x1
	.globl gText_Rom_30F74E
	.set gText_Rom_30F74E, gText_Rom_30F74D + 0x1

	@ src/berry_blender.c:271 berry_blender_line_271
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_30F753
gText_Rom_30F753: @ 0x0830F753
	.string " おとこのこ$"
	.if (. - gText_Rom_30F753) != 0x7
	.error "gText_Rom_30F753 must retain its original byte length"
	.endif
	.globl gText_Rom_30F754
	.set gText_Rom_30F754, gText_Rom_30F753 + 0x1

	@ src/berry_blender.c:272 berry_blender_line_272 (+1 aliases)
	.globl gText_Rom_30F75A
gText_Rom_30F75A: @ 0x0830F75A
	.string "おんなのこ$"
	.if (. - gText_Rom_30F75A) > 0x6
	.error "gText_Rom_30F75A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F75A) < 0x6
	.space 0x6 - (. - gText_Rom_30F75A)
	.endif
	.globl gUnknown_830F760
gUnknown_830F760: @ 0x0830F760

	@ src/berry_blender.c:273 berry_blender_line_273
	.globl gText_Rom_30F760
gText_Rom_30F760: @ 0x0830F760
	.string "めいじん$"
	.if (. - gText_Rom_30F760) > 0x5
	.error "gText_Rom_30F760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F760) < 0x5
	.space 0x5 - (. - gText_Rom_30F760)
	.endif

	@ src/berry_blender.c:274 berry_blender_line_274
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F765
gText_Rom_30F765: @ 0x0830F765
	.string " おにいさん$"
	.if (. - gText_Rom_30F765) != 0x7
	.error "gText_Rom_30F765 must retain its original byte length"
	.endif
	.globl gUnknown_830F766
	.set gUnknown_830F766, gText_Rom_30F765 + 0x1
	.globl gText_Rom_30F766
	.set gText_Rom_30F766, gText_Rom_30F765 + 0x1
	.globl gUnknown_830F76C
gUnknown_830F76C: @ 0x0830F76C

	@ src/berry_blender.c:275 berry_blender_line_275 (+1 aliases)
	.globl gText_Rom_30F76C
gText_Rom_30F76C: @ 0x0830F76C
	.string "おばさん$"
	.if (. - gText_Rom_30F76C) > 0x5
	.error "gText_Rom_30F76C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F76C) < 0x5
	.space 0x5 - (. - gText_Rom_30F76C)
	.endif
	.incbin "baserom.gba", 0x30f771, 0xb

	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_30F77C
gText_Rom_30F77C: @ 0x0830F77C
	.string "します$"
	.if (. - gText_Rom_30F77C) > 0x4
	.error "gText_Rom_30F77C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F77C) < 0x4
	.space 0x4 - (. - gText_Rom_30F77C)
	.endif
	.incbin "baserom.gba", 0x30f780, 0xe
	.globl gUnknown_830F78E
gUnknown_830F78E: @ 0x0830F78E

	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_30F78E
gText_Rom_30F78E: @ 0x0830F78E
	.string "つうしんたいきちゅうです$"
	.if (. - gText_Rom_30F78E) > 0xd
	.error "gText_Rom_30F78E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F78E) < 0xd
	.space 0xd - (. - gText_Rom_30F78E)
	.endif
	.globl gUnknown_830F79B
gUnknown_830F79B: @ 0x0830F79B
	.incbin "baserom.gba", 0x30f79b, 0x17
	.globl gUnknown_830F7B2
gUnknown_830F7B2: @ 0x0830F7B2

	@ src/berry_blender.c:280 sText_RunOutOfBerriesForBlending
	.globl gText_Rom_30F7B2
gText_Rom_30F7B2: @ 0x0830F7B2
	.string "きのみブレンダーに いれる きのみが\nないので これいじょう できません\p$"
	.if (. - gText_Rom_30F7B2) > 0x26
	.error "gText_Rom_30F7B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7B2) < 0x26
	.space 0x26 - (. - gText_Rom_30F7B2)
	.endif
	.globl gUnknown_830F7D8
gUnknown_830F7D8: @ 0x0830F7D8

	@ src/berry_blender.c:281 sText_YourPokeblockCaseIsFull
	.globl gText_Rom_30F7D8
gText_Rom_30F7D8: @ 0x0830F7D8
	.string "ポロックケースが いっぱいの ようです\p$"
	.if (. - gText_Rom_30F7D8) > 0x15
	.error "gText_Rom_30F7D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7D8) < 0x15
	.space 0x15 - (. - gText_Rom_30F7D8)
	.endif
	.globl gUnknown_830F7ED
gUnknown_830F7ED: @ 0x0830F7ED

	@ src/berry_blender.c:282 sText_HasNoBerriesToPut
	.globl gText_Rom_30F7ED
gText_Rom_30F7ED: @ 0x0830F7ED
	.string "は きのみブレンダーに\nいれる きのみがないようです$"
	.if (. - gText_Rom_30F7ED) > 0x1b
	.error "gText_Rom_30F7ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F7ED) < 0x1b
	.space 0x1b - (. - gText_Rom_30F7ED)
	.endif
	.globl gUnknown_830F808
gUnknown_830F808: @ 0x0830F808

	@ src/berry_blender.c:283 sText_ApostropheSPokeblockCaseIsFull
	.globl gText_Rom_30F808
gText_Rom_30F808: @ 0x0830F808
	.string "は ポロックケースが\nいっぱいの ようです\p$"
	.if (. - gText_Rom_30F808) > 0x17
	.error "gText_Rom_30F808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F808) < 0x17
	.space 0x17 - (. - gText_Rom_30F808)
	.endif
	.globl gUnknown_830F81F
gUnknown_830F81F: @ 0x0830F81F

	@ src/berry_blender.c:284 sText_BlendingResults
	.globl gText_Rom_30F81F
gText_Rom_30F81F: @ 0x0830F81F
	.string "まぜたけっか$"
	.if (. - gText_Rom_30F81F) > 0x7
	.error "gText_Rom_30F81F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F81F) < 0x7
	.space 0x7 - (. - gText_Rom_30F81F)
	.endif
	.incbin "baserom.gba", 0x30f826, 0x7
	.globl gUnknown_830F82D
gUnknown_830F82D: @ 0x0830F82D

	@ asm/berry_blender.s:7852 Blender_PrintBlendingResults
	.globl gText_Rom_30F82D
gText_Rom_30F82D: @ 0x0830F82D
	.string "のみ$"
	.if (. - gText_Rom_30F82D) > 0x3
	.error "gText_Rom_30F82D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F82D) < 0x3
	.space 0x3 - (. - gText_Rom_30F82D)
	.endif
	.globl gUnknown_830F830
gUnknown_830F830: @ 0x0830F830

	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_30F830
gText_Rom_30F830: @ 0x0830F830
	.string "じかん$"
	.if (. - gText_Rom_30F830) > 0x4
	.error "gText_Rom_30F830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F830) < 0x4
	.space 0x4 - (. - gText_Rom_30F830)
	.endif
	.globl gUnknown_830F834
gUnknown_830F834: @ 0x0830F834

	@ asm/berry_blender.s:7981 Blender_PrintBlendingResults
	.globl gText_Rom_30F834
gText_Rom_30F834: @ 0x0830F834
	.string "ふん$"
	.if (. - gText_Rom_30F834) > 0x3
	.error "gText_Rom_30F834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F834) < 0x3
	.space 0x3 - (. - gText_Rom_30F834)
	.endif
	.globl gUnknown_830F837
gUnknown_830F837: @ 0x0830F837

	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl gText_Rom_30F837
gText_Rom_30F837: @ 0x0830F837
	.string "びょう$"
	.if (. - gText_Rom_30F837) > 0x4
	.error "gText_Rom_30F837 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F837) < 0x4
	.space 0x4 - (. - gText_Rom_30F837)
	.endif
	.globl gUnknown_830F83B
gUnknown_830F83B: @ 0x0830F83B

	@ src/berry_blender.c:289 sText_MaximumSpeed
	.globl gText_Rom_30F83B
gText_Rom_30F83B: @ 0x0830F83B
	.string "さいこうそくど$"
	.if (. - gText_Rom_30F83B) > 0x8
	.error "gText_Rom_30F83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F83B) < 0x8
	.space 0x8 - (. - gText_Rom_30F83B)
	.endif
	.globl gUnknown_830F843
gUnknown_830F843: @ 0x0830F843

	@ src/berry_blender.c:290 sText_RPM
	.globl gText_Rom_30F843
gText_Rom_30F843: @ 0x0830F843
	.string "rpm$"
	.if (. - gText_Rom_30F843) > 0x4
	.error "gText_Rom_30F843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F843) < 0x4
	.space 0x4 - (. - gText_Rom_30F843)
	.endif
	.globl gUnknown_830F847
gUnknown_830F847: @ 0x0830F847

	@ asm/berry_blender.s:7807 Blender_PrintBlendingResults
	.globl gText_Rom_30F847
gText_Rom_30F847: @ 0x0830F847
	.string ",$"
	.if (. - gText_Rom_30F847) > 0x2
	.error "gText_Rom_30F847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F847) < 0x2
	.space 0x2 - (. - gText_Rom_30F847)
	.endif
	.globl gUnknown_830F849
gUnknown_830F849: @ 0x0830F849
	.incbin "baserom.gba", 0x30f849, 0x4
	.globl gUnknown_830F84D
gUnknown_830F84D: @ 0x0830F84D

	@ src/berry_blender.c:309 sText_Ranking
	.globl gText_Rom_30F84D
gText_Rom_30F84D: @ 0x0830F84D
	.string "ランキング$"
	.if (. - gText_Rom_30F84D) > 0x6
	.error "gText_Rom_30F84D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F84D) < 0x6
	.space 0x6 - (. - gText_Rom_30F84D)
	.endif
	.globl gUnknown_830F853
gUnknown_830F853: @ 0x0830F853

	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl gText_Rom_30F853
gText_Rom_30F853: @ 0x0830F853
	.string "レベル$"
	.if (. - gText_Rom_30F853) > 0x4
	.error "gText_Rom_30F853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F853) < 0x4
	.space 0x4 - (. - gText_Rom_30F853)
	.endif
	.globl gUnknown_830F857
gUnknown_830F857: @ 0x0830F857

	@ src/berry_blender.c:311 sText_TheFeelIs
	.globl gText_Rom_30F857
gText_Rom_30F857: @ 0x0830F857
	.string "で なめらかさは$"
	.if (. - gText_Rom_30F857) > 0x9
	.error "gText_Rom_30F857 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F857) < 0x9
	.space 0x9 - (. - gText_Rom_30F857)
	.endif
	.globl gUnknown_830F860
gUnknown_830F860: @ 0x0830F860

	@ asm/berry_blender.s:8215 Blender_PrintMadePokeblockString
	.globl gText_Rom_30F860
gText_Rom_30F860: @ 0x0830F860
	.string "だ$"
	.if (. - gText_Rom_30F860) > 0x2
	.error "gText_Rom_30F860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F860) < 0x2
	.space 0x2 - (. - gText_Rom_30F860)
	.endif
	.incbin "baserom.gba", 0x30f862, 0x2
	.globl gUnknown_830F864
gUnknown_830F864: @ 0x0830F864
	.incbin "baserom.gba", 0x30f864, 0xc
	.globl gUnknown_830F870
gUnknown_830F870: @ 0x0830F870
	.incbin "baserom.gba", 0x30f870, 0x38
	.globl gUnknown_830F8A8
gUnknown_830F8A8: @ 0x0830F8A8
	.incbin "baserom.gba", 0x30f8a8, 0x8
	.globl gUnknown_830F8B0
gUnknown_830F8B0: @ 0x0830F8B0
	.incbin "baserom.gba", 0x30f8b0, 0x8
	.globl gUnknown_830F8B8
gUnknown_830F8B8: @ 0x0830F8B8
	.incbin "baserom.gba", 0x30f8b8, 0x8
	.globl gUnknown_830F8C0
gUnknown_830F8C0: @ 0x0830F8C0
	.incbin "baserom.gba", 0x30f8c0, 0xc
	.globl gUnknown_830F8CC
gUnknown_830F8CC: @ 0x0830F8CC
	.incbin "baserom.gba", 0x30f8cc, 0x8
	.globl gUnknown_830F8D4
gUnknown_830F8D4: @ 0x0830F8D4
	.incbin "baserom.gba", 0x30f8d4, 0x3
	.globl gUnknown_830F8D7
gUnknown_830F8D7: @ 0x0830F8D7
	.incbin "baserom.gba", 0x30f8d7, 0x5
	.globl gUnknown_830F8DC
gUnknown_830F8DC: @ 0x0830F8DC
	.incbin "baserom.gba", 0x30f8dc, 0xd4
	.globl gUnknown_830F9B0
gUnknown_830F9B0: @ 0x0830F9B0
	.incbin "baserom.gba", 0x30f9b0, 0x8
	.globl gUnknown_830F9B8
gUnknown_830F9B8: @ 0x0830F9B8
	.incbin "baserom.gba", 0x30f9b8, 0x8
	.globl gUnknown_830F9C0
gUnknown_830F9C0: @ 0x0830F9C0
	.incbin "baserom.gba", 0x30f9c0, 0x8
	.globl gUnknown_830F9C8
gUnknown_830F9C8: @ 0x0830F9C8
	.incbin "baserom.gba", 0x30f9c8, 0x60
	.globl gUnknown_830FA28
gUnknown_830FA28: @ 0x0830FA28
	.incbin "baserom.gba", 0x30fa28, 0x8
	.globl gUnknown_830FA30
gUnknown_830FA30: @ 0x0830FA30
	.incbin "baserom.gba", 0x30fa30, 0x98
	.globl gUnknown_830FAC8
gUnknown_830FAC8: @ 0x0830FAC8
	.incbin "baserom.gba", 0x30fac8, 0x8
	.globl gUnknown_830FAD0
gUnknown_830FAD0: @ 0x0830FAD0
	.incbin "baserom.gba", 0x30fad0, 0x44
	.globl gUnknown_830FB14
gUnknown_830FB14: @ 0x0830FB14
	.incbin "baserom.gba", 0x30fb14, 0x8
	.globl gUnknown_830FB1C
gUnknown_830FB1C: @ 0x0830FB1C
	.incbin "baserom.gba", 0x30fb1c, 0x2c
	.globl gUnknown_830FB48
gUnknown_830FB48: @ 0x0830FB48
	.incbin "baserom.gba", 0x30fb48, 0x8
	.globl gUnknown_830FB50
gUnknown_830FB50: @ 0x0830FB50
	.incbin "baserom.gba", 0x30fb50, 0x18
	.globl gUnknown_830FB68
gUnknown_830FB68: @ 0x0830FB68
	.incbin "baserom.gba", 0x30fb68, 0x28
	.globl gUnknown_830FB90
gUnknown_830FB90: @ 0x0830FB90
	.incbin "baserom.gba", 0x30fb90, 0x1e
	.globl gUnknown_830FBAE
gUnknown_830FBAE: @ 0x0830FBAE
	.incbin "baserom.gba", 0x30fbae, 0x5
	.globl gUnknown_830FBB3
gUnknown_830FBB3: @ 0x0830FBB3
	.incbin "baserom.gba", 0x30fbb3, 0x5
	.globl gUnknown_830FBB8
gUnknown_830FBB8: @ 0x0830FBB8
	.incbin "baserom.gba", 0x30fbb8, 0x10
	.globl gUnknown_830FBC8
gUnknown_830FBC8: @ 0x0830FBC8

	@ src/berry_blender.c:314 sText_SavingDontTurnOff2
	.globl gText_Rom_30FBC8
gText_Rom_30FBC8: @ 0x0830FBC8
	.string "ポケモンレポートに かきこんでいます    \nでんげんを きらないで ください      $"
	.if (. - gText_Rom_30FBC8) > 0x2e
	.error "gText_Rom_30FBC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBC8) < 0x2e
	.space 0x2e - (. - gText_Rom_30FBC8)
	.endif

	@ src/berry_blender.c:917 sJPText_GoodTvReady
	.globl gText_Rom_30FBF6
gText_Rom_30FBF6: @ 0x0830FBF6
	.string "\nいいTVができました $"
	.if (. - gText_Rom_30FBF6) > 0xd
	.error "gText_Rom_30FBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FBF6) < 0xd
	.space 0xd - (. - gText_Rom_30FBF6)
	.endif

	@ src/berry_blender.c:918 sJPText_BadTvReady
	.globl gText_Rom_30FC03
gText_Rom_30FC03: @ 0x0830FC03
	.string "\nダメTVができました $"
	.if (. - gText_Rom_30FC03) > 0xd
	.error "gText_Rom_30FC03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC03) < 0xd
	.space 0xd - (. - gText_Rom_30FC03)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC10
gText_Rom_30FC10: @ 0x0830FC10
	.string "からい$"
	.if (. - gText_Rom_30FC10) > 0x4
	.error "gText_Rom_30FC10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC10) < 0x4
	.space 0x4 - (. - gText_Rom_30FC10)
	.endif
	.incbin "baserom.gba", 0x30fc14, 0x1

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC15
gText_Rom_30FC15: @ 0x0830FC15
	.string "しぶい$"
	.if (. - gText_Rom_30FC15) > 0x4
	.error "gText_Rom_30FC15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC15) < 0x4
	.space 0x4 - (. - gText_Rom_30FC15)
	.endif
	.incbin "baserom.gba", 0x30fc19, 0x1

	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_30FC1A
gText_Rom_30FC1A: @ 0x0830FC1A
	.string "あまい$"
	.if (. - gText_Rom_30FC1A) > 0x4
	.error "gText_Rom_30FC1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1A) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1A)
	.endif
	.incbin "baserom.gba", 0x30fc1e, 0x1

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC1F
gText_Rom_30FC1F: @ 0x0830FC1F
	.string "にがい$"
	.if (. - gText_Rom_30FC1F) > 0x4
	.error "gText_Rom_30FC1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1F) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1F)
	.endif
	.incbin "baserom.gba", 0x30fc23, 0x1

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC24
gText_Rom_30FC24: @ 0x0830FC24
	.string "すっぱい$"
	.if (. - gText_Rom_30FC24) > 0x5
	.error "gText_Rom_30FC24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC24) < 0x5
	.space 0x5 - (. - gText_Rom_30FC24)
	.endif
	.globl gUnknown_830FC29
gUnknown_830FC29: @ 0x0830FC29
	.incbin "baserom.gba", 0x30fc29, 0x5
	.globl gUnknown_830FC2E
gUnknown_830FC2E: @ 0x0830FC2E
	.incbin "baserom.gba", 0x30fc2e, 0x5
	.globl gUnknown_830FC33
gUnknown_830FC33: @ 0x0830FC33
	.incbin "baserom.gba", 0x30fc33, 0x5
	.globl gUnknown_830FC38
gUnknown_830FC38: @ 0x0830FC38

	@ src/berry_blender.c:315 sText_BlenderMaxSpeedRecord
	.globl gText_Rom_30FC38
gText_Rom_30FC38: @ 0x0830FC38
	.string "きのみブレンダー\nさいこうそくど ランキング！$"
	.if (. - gText_Rom_30FC38) > 0x18
	.error "gText_Rom_30FC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC38) < 0x18
	.space 0x18 - (. - gText_Rom_30FC38)
	.endif
	.globl gUnknown_830FC50
gUnknown_830FC50: @ 0x0830FC50

	@ src/berry_blender.c:316 sText_234Players
	.globl gText_Rom_30FC50
gText_Rom_30FC50: @ 0x0830FC50
	.string "ふたり\nさんにん\nよにん$"
	.if (. - gText_Rom_30FC50) > 0xd
	.error "gText_Rom_30FC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC50) < 0xd
	.space 0xd - (. - gText_Rom_30FC50)
	.endif
	.incbin "baserom.gba", 0x30fc5d, 0x3
	.globl gUnknown_830FC60
gUnknown_830FC60: @ 0x0830FC60
	.incbin "baserom.gba", 0x30fc60, 0x8
	.globl gUnknown_830FC68
gUnknown_830FC68: @ 0x0830FC68
	.incbin "baserom.gba", 0x30fc68, 0x20
	.globl gUnknown_830FC88
gUnknown_830FC88: @ 0x0830FC88
	.incbin "baserom.gba", 0x30fc88, 0x28
	.globl gUnknown_830FCB0
gUnknown_830FCB0: @ 0x0830FCB0
	.incbin "baserom.gba", 0x30fcb0, 0x48
	.globl gUnknown_830FCF8
gUnknown_830FCF8: @ 0x0830FCF8
	.incbin "baserom.gba", 0x30fcf8, 0x10
	.globl gUnknown_830FD08
gUnknown_830FD08: @ 0x0830FD08
	.incbin "baserom.gba", 0x30fd08, 0xc
	.globl gUnknown_830FD14
gUnknown_830FD14: @ 0x0830FD14
	.incbin "baserom.gba", 0x30fd14, 0xc
	.globl gUnknown_830FD20
gUnknown_830FD20: @ 0x0830FD20
	.incbin "baserom.gba", 0x30fd20, 0x2c
	.globl gUnknown_830FD4C
gUnknown_830FD4C: @ 0x0830FD4C
	.incbin "baserom.gba", 0x30fd4c, 0xa8348
	.globl gUnknown_83B8094
gUnknown_83B8094: @ 0x083B8094
	.incbin "baserom.gba", 0x3b8094, 0x4
	.globl gUnknown_83B8098
gUnknown_83B8098: @ 0x083B8098
	.incbin "baserom.gba", 0x3b8098, 0xa215c
	.globl gUnknown_845A1F4
gUnknown_845A1F4: @ 0x0845A1F4
	.incbin "baserom.gba", 0x45a1f4, 0x3de6

	@ src/field_specials.c:2542 field_specials_line_2542
	.globl gText_Rom_45DFDA
gText_Rom_45DFDA: @ 0x0845DFDA
	.string "  ？$"
	.if (. - gText_Rom_45DFDA) > 0x4
	.error "gText_Rom_45DFDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_45DFDA) < 0x4
	.space 0x4 - (. - gText_Rom_45DFDA)
	.endif
	.incbin "baserom.gba", 0x45dfde, 0x9ba
	.globl gUnknown_845E998
gUnknown_845E998: @ 0x0845E998
	.incbin "baserom.gba", 0x45e998, 0x980
	.globl gUnknown_845F318
gUnknown_845F318: @ 0x0845F318
	.incbin "baserom.gba", 0x45f318, 0x4
	.globl gUnknown_845F31C
gUnknown_845F31C: @ 0x0845F31C
	.incbin "baserom.gba", 0x45f31c, 0x10090
	.globl gUnknown_846F3AC
gUnknown_846F3AC: @ 0x0846F3AC
	.incbin "baserom.gba", 0x46f3ac, 0x14
	.globl gUnknown_846F3C0
gUnknown_846F3C0: @ 0x0846F3C0
	.incbin "baserom.gba", 0x46f3c0, 0x14
	.globl gUnknown_846F3D4
gUnknown_846F3D4: @ 0x0846F3D4
	.incbin "baserom.gba", 0x46f3d4, 0x1c0
	.globl gUnknown_846F594
gUnknown_846F594: @ 0x0846F594
	.incbin "baserom.gba", 0x46f594, 0x288
	.globl gUnknown_846F81C
gUnknown_846F81C: @ 0x0846F81C
	.incbin "baserom.gba", 0x46f81c, 0x48
	.globl gUnknown_846F864
gUnknown_846F864: @ 0x0846F864
	.incbin "baserom.gba", 0x46f864, 0x4c
	.globl gUnknown_846F8B0
gUnknown_846F8B0: @ 0x0846F8B0
	.incbin "baserom.gba", 0x46f8b0, 0xc
	.globl gUnknown_846F8BC
gUnknown_846F8BC: @ 0x0846F8BC
	.incbin "baserom.gba", 0x46f8bc, 0x14
	.globl gUnknown_846F8D0
gUnknown_846F8D0: @ 0x0846F8D0
	.incbin "baserom.gba", 0x46f8d0, 0x8
	.globl gUnknown_846F8D8
gUnknown_846F8D8: @ 0x0846F8D8
	.incbin "baserom.gba", 0x46f8d8, 0x20
	.globl gUnknown_846F8F8
gUnknown_846F8F8: @ 0x0846F8F8
	.incbin "baserom.gba", 0x46f8f8, 0x10
	.globl gUnknown_846F908
gUnknown_846F908: @ 0x0846F908
	.incbin "baserom.gba", 0x46f908, 0x10
	.globl gUnknown_846F918
gUnknown_846F918: @ 0x0846F918
	.incbin "baserom.gba", 0x46f918, 0x10
	.globl gUnknown_846F928
gUnknown_846F928: @ 0x0846F928
	.incbin "baserom.gba", 0x46f928, 0x2
	.globl gUnknown_846F92A
gUnknown_846F92A: @ 0x0846F92A
	.incbin "baserom.gba", 0x46f92a, 0x2
	.globl gUnknown_846F92C
gUnknown_846F92C: @ 0x0846F92C
	.incbin "baserom.gba", 0x46f92c, 0x14
	.globl gUnknown_846F940
gUnknown_846F940: @ 0x0846F940
	.incbin "baserom.gba", 0x46f940, 0x10
	.globl gUnknown_846F950
gUnknown_846F950: @ 0x0846F950
	.incbin "baserom.gba", 0x46f950, 0xc
	.globl gUnknown_846F95C
gUnknown_846F95C: @ 0x0846F95C
	.incbin "baserom.gba", 0x46f95c, 0x4
	.globl gUnknown_846F960
gUnknown_846F960: @ 0x0846F960
	.incbin "baserom.gba", 0x46f960, 0x10
	.globl gUnknown_846F970
gUnknown_846F970: @ 0x0846F970
	.incbin "baserom.gba", 0x46f970, 0x4
	.globl gUnknown_846F974
gUnknown_846F974: @ 0x0846F974
	.incbin "baserom.gba", 0x46f974, 0x8
	.globl gUnknown_846F97C
gUnknown_846F97C: @ 0x0846F97C
	.incbin "baserom.gba", 0x46f97c, 0x40
	.globl gUnknown_846F9BC
gUnknown_846F9BC: @ 0x0846F9BC
	.incbin "baserom.gba", 0x46f9bc, 0x6
	.globl gUnknown_846F9C2
gUnknown_846F9C2: @ 0x0846F9C2
	.incbin "baserom.gba", 0x46f9c2, 0x6
	.globl gUnknown_846F9C8
gUnknown_846F9C8: @ 0x0846F9C8
	.incbin "baserom.gba", 0x46f9c8, 0x2
	.globl gUnknown_846F9CA
gUnknown_846F9CA: @ 0x0846F9CA
	.incbin "baserom.gba", 0x46f9ca, 0xc
	.globl gUnknown_846F9D6
gUnknown_846F9D6: @ 0x0846F9D6
	.incbin "baserom.gba", 0x46f9d6, 0x6
	.globl gUnknown_846F9DC
gUnknown_846F9DC: @ 0x0846F9DC
	.incbin "baserom.gba", 0x46f9dc, 0xc
	.globl gUnknown_846F9E8
gUnknown_846F9E8: @ 0x0846F9E8

	@ asm/field_player_avatar.s:4692 Fishing10
	.globl gText_Rom_46F9E8
gText_Rom_46F9E8: @ 0x0846F9E8
	.string "ポケモンを　つりあげた！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9E8) > 0xf
	.error "gText_Rom_46F9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9E8) < 0xf
	.space 0xf - (. - gText_Rom_46F9E8)
	.endif
	.globl gUnknown_846F9F7
gUnknown_846F9F7: @ 0x0846F9F7

	@ asm/field_player_avatar.s:4855 Fishing12
	.globl gText_Rom_46F9F7
gText_Rom_46F9F7: @ 0x0846F9F7
	.string "つれないなあ・・・{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46F9F7) > 0xc
	.error "gText_Rom_46F9F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46F9F7) < 0xc
	.space 0xc - (. - gText_Rom_46F9F7)
	.endif
	.globl gUnknown_846FA03
gUnknown_846FA03: @ 0x0846FA03

	@ asm/field_player_avatar.s:4906 Fishing13
	.globl gText_Rom_46FA03
gText_Rom_46FA03: @ 0x0846FA03
	.string "にげられて　しまった・・・{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_46FA03) > 0x10
	.error "gText_Rom_46FA03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_46FA03) < 0x10
	.space 0x10 - (. - gText_Rom_46FA03)
	.endif
	.globl gUnknown_846FA13
gUnknown_846FA13: @ 0x0846FA13
	.incbin "baserom.gba", 0x46fa13, 0x5
	.globl gUnknown_846FA18
gUnknown_846FA18: @ 0x0846FA18
	.incbin "baserom.gba", 0x46fa18, 0x10
	.globl gUnknown_846FA28
gUnknown_846FA28: @ 0x0846FA28
	.incbin "baserom.gba", 0x46fa28, 0x18
	.globl gUnknown_846FA40
gUnknown_846FA40: @ 0x0846FA40
	.incbin "baserom.gba", 0x46fa40, 0x120c
	.globl gUnknown_8470C4C
gUnknown_8470C4C: @ 0x08470C4C
	.incbin "baserom.gba", 0x470c4c, 0x1220
	.globl gUnknown_8471E6C
gUnknown_8471E6C: @ 0x08471E6C
	.incbin "baserom.gba", 0x471e6c, 0xa860
	.globl gUnknown_847C6CC
gUnknown_847C6CC: @ 0x0847C6CC
	.incbin "baserom.gba", 0x47c6cc, 0x1240
	.globl gUnknown_847D90C
gUnknown_847D90C: @ 0x0847D90C
	.incbin "baserom.gba", 0x47d90c, 0x40785

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE091
gText_Rom_4BE091: @ 0x084BE091
	.string "ラララ$"
	.if (. - gText_Rom_4BE091) > 0x4
	.error "gText_Rom_4BE091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE091) < 0x4
	.space 0x4 - (. - gText_Rom_4BE091)
	.endif
	.incbin "baserom.gba", 0x4be095, 0x1c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE0B1
gText_Rom_4BE0B1: @ 0x084BE0B1
	.string "ラララ$"
	.if (. - gText_Rom_4BE0B1) > 0x4
	.error "gText_Rom_4BE0B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0B1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0B1)
	.endif
	.incbin "baserom.gba", 0x4be0b5, 0x1c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE0D1
gText_Rom_4BE0D1: @ 0x084BE0D1
	.string "ラララ$"
	.if (. - gText_Rom_4BE0D1) > 0x4
	.error "gText_Rom_4BE0D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0D1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0D1)
	.endif
	.incbin "baserom.gba", 0x4be0d5, 0x1c

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_4BE0F1
gText_Rom_4BE0F1: @ 0x084BE0F1
	.string "ラララ$"
	.if (. - gText_Rom_4BE0F1) > 0x4
	.error "gText_Rom_4BE0F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4BE0F1) < 0x4
	.space 0x4 - (. - gText_Rom_4BE0F1)
	.endif
	.incbin "baserom.gba", 0x4be0f5, 0x117b6

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4CF8AB
gText_Rom_4CF8AB: @ 0x084CF8AB
	.string "z    $"
	.if (. - gText_Rom_4CF8AB) > 0x6
	.error "gText_Rom_4CF8AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4CF8AB) < 0x6
	.space 0x6 - (. - gText_Rom_4CF8AB)
	.endif
	.incbin "baserom.gba", 0x4cf8b1, 0xdfdb
	.globl gUnknown_84DD88C
gUnknown_84DD88C: @ 0x084DD88C
	.incbin "baserom.gba", 0x4dd88c, 0x144
	.globl gUnknown_84DD9D0
gUnknown_84DD9D0: @ 0x084DD9D0
	.incbin "baserom.gba", 0x4dd9d0, 0x51
	.globl gUnknown_84DDA21
gUnknown_84DDA21: @ 0x084DDA21
	.incbin "baserom.gba", 0x4dda21, 0x53
	.globl gUnknown_84DDA74
gUnknown_84DDA74: @ 0x084DDA74
	.incbin "baserom.gba", 0x4dda74, 0x3bc
	.globl gUnknown_84DDE30
gUnknown_84DDE30: @ 0x084DDE30
	.incbin "baserom.gba", 0x4dde30, 0x1c
	.globl gUnknown_84DDE4C
gUnknown_84DDE4C: @ 0x084DDE4C
	.incbin "baserom.gba", 0x4dde4c, 0x3ab4
	.globl gUnknown_84E1900
gUnknown_84E1900: @ 0x084E1900
	.incbin "baserom.gba", 0x4e1900, 0x271c
	.globl gUnknown_84E401C
gUnknown_84E401C: @ 0x084E401C
	.incbin "baserom.gba", 0x4e401c, 0x138
	.globl gUnknown_84E4154
gUnknown_84E4154: @ 0x084E4154
	.incbin "baserom.gba", 0x4e4154, 0x78
	.globl gUnknown_84E41CC
gUnknown_84E41CC: @ 0x084E41CC
	.incbin "baserom.gba", 0x4e41cc, 0xc0
	.globl gUnknown_84E428C
gUnknown_84E428C: @ 0x084E428C
	.incbin "baserom.gba", 0x4e428c, 0x978
	.globl gUnknown_84E4C04
gUnknown_84E4C04: @ 0x084E4C04
	.incbin "baserom.gba", 0x4e4c04, 0xac
	.globl gUnknown_84E4CB0
gUnknown_84E4CB0: @ 0x084E4CB0
	.incbin "baserom.gba", 0x4e4cb0, 0xac
	.globl gUnknown_84E4D5C
gUnknown_84E4D5C: @ 0x084E4D5C
	.incbin "baserom.gba", 0x4e4d5c, 0xc0
	.globl gUnknown_84E4E1C
gUnknown_84E4E1C: @ 0x084E4E1C
	.incbin "baserom.gba", 0x4e4e1c, 0xd14
	.globl gUnknown_84E5B30
gUnknown_84E5B30: @ 0x084E5B30
	.incbin "baserom.gba", 0x4e5b30, 0x10
	.globl gUnknown_84E5B40
gUnknown_84E5B40: @ 0x084E5B40
	.incbin "baserom.gba", 0x4e5b40, 0x8
	.globl gUnknown_84E5B48
gUnknown_84E5B48: @ 0x084E5B48
	.incbin "baserom.gba", 0x4e5b48, 0x1c
	.globl gUnknown_84E5B64
gUnknown_84E5B64: @ 0x084E5B64
	.incbin "baserom.gba", 0x4e5b64, 0x4
	.globl gUnknown_84E5B68
gUnknown_84E5B68: @ 0x084E5B68
	.incbin "baserom.gba", 0x4e5b68, 0x2c
	.globl gUnknown_84E5B94
gUnknown_84E5B94: @ 0x084E5B94
	.incbin "baserom.gba", 0x4e5b94, 0x14
	.globl gUnknown_84E5BA8
gUnknown_84E5BA8: @ 0x084E5BA8
	.incbin "baserom.gba", 0x4e5ba8, 0x1c
	.globl gUnknown_84E5BC4
gUnknown_84E5BC4: @ 0x084E5BC4
	.incbin "baserom.gba", 0x4e5bc4, 0x4
	.globl gUnknown_84E5BC8
gUnknown_84E5BC8: @ 0x084E5BC8
	.incbin "baserom.gba", 0x4e5bc8, 0x1c
	.globl gUnknown_84E5BE4
gUnknown_84E5BE4: @ 0x084E5BE4
	.incbin "baserom.gba", 0x4e5be4, 0x4
	.globl gUnknown_84E5BE8
gUnknown_84E5BE8: @ 0x084E5BE8
	.incbin "baserom.gba", 0x4e5be8, 0xc
	.globl gUnknown_84E5BF4
gUnknown_84E5BF4: @ 0x084E5BF4
	.incbin "baserom.gba", 0x4e5bf4, 0x14
	.globl gUnknown_84E5C08
gUnknown_84E5C08: @ 0x084E5C08
	.incbin "baserom.gba", 0x4e5c08, 0x14
	.globl gUnknown_84E5C1C
gUnknown_84E5C1C: @ 0x084E5C1C
	.incbin "baserom.gba", 0x4e5c1c, 0x14
	.globl gUnknown_84E5C30
gUnknown_84E5C30: @ 0x084E5C30
	.incbin "baserom.gba", 0x4e5c30, 0x14
	.globl gUnknown_84E5C44
gUnknown_84E5C44: @ 0x084E5C44
	.incbin "baserom.gba", 0x4e5c44, 0x4
	.globl gUnknown_84E5C48
gUnknown_84E5C48: @ 0x084E5C48
	.incbin "baserom.gba", 0x4e5c48, 0x14
	.globl gUnknown_84E5C5C
gUnknown_84E5C5C: @ 0x084E5C5C
	.incbin "baserom.gba", 0x4e5c5c, 0x4
	.globl gUnknown_84E5C60
gUnknown_84E5C60: @ 0x084E5C60
	.incbin "baserom.gba", 0x4e5c60, 0x14
	.globl gUnknown_84E5C74
gUnknown_84E5C74: @ 0x084E5C74
	.incbin "baserom.gba", 0x4e5c74, 0x4
	.globl gUnknown_84E5C78
gUnknown_84E5C78: @ 0x084E5C78
	.incbin "baserom.gba", 0x4e5c78, 0x14
	.globl gUnknown_84E5C8C
gUnknown_84E5C8C: @ 0x084E5C8C
	.incbin "baserom.gba", 0x4e5c8c, 0x4
	.globl gUnknown_84E5C90
gUnknown_84E5C90: @ 0x084E5C90
	.incbin "baserom.gba", 0x4e5c90, 0x14
	.globl gUnknown_84E5CA4
gUnknown_84E5CA4: @ 0x084E5CA4
	.incbin "baserom.gba", 0x4e5ca4, 0x4
	.globl gUnknown_84E5CA8
gUnknown_84E5CA8: @ 0x084E5CA8
	.incbin "baserom.gba", 0x4e5ca8, 0x14
	.globl gUnknown_84E5CBC
gUnknown_84E5CBC: @ 0x084E5CBC
	.incbin "baserom.gba", 0x4e5cbc, 0x4
	.globl gUnknown_84E5CC0
gUnknown_84E5CC0: @ 0x084E5CC0
	.incbin "baserom.gba", 0x4e5cc0, 0x14
	.globl gUnknown_84E5CD4
gUnknown_84E5CD4: @ 0x084E5CD4
	.incbin "baserom.gba", 0x4e5cd4, 0x4
	.globl gUnknown_84E5CD8
gUnknown_84E5CD8: @ 0x084E5CD8
	.incbin "baserom.gba", 0x4e5cd8, 0x14
	.globl gUnknown_84E5CEC
gUnknown_84E5CEC: @ 0x084E5CEC
	.incbin "baserom.gba", 0x4e5cec, 0x4
	.globl gUnknown_84E5CF0
gUnknown_84E5CF0: @ 0x084E5CF0
	.incbin "baserom.gba", 0x4e5cf0, 0x10
	.globl gUnknown_84E5D00
gUnknown_84E5D00: @ 0x084E5D00
	.incbin "baserom.gba", 0x4e5d00, 0x8
	.globl gUnknown_84E5D08
gUnknown_84E5D08: @ 0x084E5D08
	.incbin "baserom.gba", 0x4e5d08, 0x10
	.globl gUnknown_84E5D18
gUnknown_84E5D18: @ 0x084E5D18
	.incbin "baserom.gba", 0x4e5d18, 0x8
	.globl gUnknown_84E5D20
gUnknown_84E5D20: @ 0x084E5D20
	.incbin "baserom.gba", 0x4e5d20, 0x10
	.globl gUnknown_84E5D30
gUnknown_84E5D30: @ 0x084E5D30
	.incbin "baserom.gba", 0x4e5d30, 0xc
	.globl gUnknown_84E5D3C
gUnknown_84E5D3C: @ 0x084E5D3C
	.incbin "baserom.gba", 0x4e5d3c, 0x4
	.globl gUnknown_84E5D40
gUnknown_84E5D40: @ 0x084E5D40
	.incbin "baserom.gba", 0x4e5d40, 0xc
	.globl gUnknown_84E5D4C
gUnknown_84E5D4C: @ 0x084E5D4C
	.incbin "baserom.gba", 0x4e5d4c, 0x4
	.globl gUnknown_84E5D50
gUnknown_84E5D50: @ 0x084E5D50
	.incbin "baserom.gba", 0x4e5d50, 0xc
	.globl gUnknown_84E5D5C
gUnknown_84E5D5C: @ 0x084E5D5C
	.incbin "baserom.gba", 0x4e5d5c, 0x4
	.globl gUnknown_84E5D60
gUnknown_84E5D60: @ 0x084E5D60
	.incbin "baserom.gba", 0x4e5d60, 0xc
	.globl gUnknown_84E5D6C
gUnknown_84E5D6C: @ 0x084E5D6C
	.incbin "baserom.gba", 0x4e5d6c, 0x4
	.globl gUnknown_84E5D70
gUnknown_84E5D70: @ 0x084E5D70
	.incbin "baserom.gba", 0x4e5d70, 0xc
	.globl gUnknown_84E5D7C
gUnknown_84E5D7C: @ 0x084E5D7C
	.incbin "baserom.gba", 0x4e5d7c, 0x4
	.globl gUnknown_84E5D80
gUnknown_84E5D80: @ 0x084E5D80
	.incbin "baserom.gba", 0x4e5d80, 0xc
	.globl gUnknown_84E5D8C
gUnknown_84E5D8C: @ 0x084E5D8C
	.incbin "baserom.gba", 0x4e5d8c, 0x4
	.globl gUnknown_84E5D90
gUnknown_84E5D90: @ 0x084E5D90
	.incbin "baserom.gba", 0x4e5d90, 0xc
	.globl gUnknown_84E5D9C
gUnknown_84E5D9C: @ 0x084E5D9C
	.incbin "baserom.gba", 0x4e5d9c, 0xc
	.globl gUnknown_84E5DA8
gUnknown_84E5DA8: @ 0x084E5DA8
	.incbin "baserom.gba", 0x4e5da8, 0x4
	.globl gUnknown_84E5DAC
gUnknown_84E5DAC: @ 0x084E5DAC
	.incbin "baserom.gba", 0x4e5dac, 0xc
	.globl gUnknown_84E5DB8
gUnknown_84E5DB8: @ 0x084E5DB8
	.incbin "baserom.gba", 0x4e5db8, 0x4
	.globl gUnknown_84E5DBC
gUnknown_84E5DBC: @ 0x084E5DBC
	.incbin "baserom.gba", 0x4e5dbc, 0xc
	.globl gUnknown_84E5DC8
gUnknown_84E5DC8: @ 0x084E5DC8
	.incbin "baserom.gba", 0x4e5dc8, 0x4
	.globl gUnknown_84E5DCC
gUnknown_84E5DCC: @ 0x084E5DCC
	.incbin "baserom.gba", 0x4e5dcc, 0xc
	.globl gUnknown_84E5DD8
gUnknown_84E5DD8: @ 0x084E5DD8
	.incbin "baserom.gba", 0x4e5dd8, 0x4
	.globl gUnknown_84E5DDC
gUnknown_84E5DDC: @ 0x084E5DDC
	.incbin "baserom.gba", 0x4e5ddc, 0xc
	.globl gUnknown_84E5DE8
gUnknown_84E5DE8: @ 0x084E5DE8
	.incbin "baserom.gba", 0x4e5de8, 0x4
	.globl gUnknown_84E5DEC
gUnknown_84E5DEC: @ 0x084E5DEC
	.incbin "baserom.gba", 0x4e5dec, 0xc
	.globl gUnknown_84E5DF8
gUnknown_84E5DF8: @ 0x084E5DF8
	.incbin "baserom.gba", 0x4e5df8, 0x4
	.globl gUnknown_84E5DFC
gUnknown_84E5DFC: @ 0x084E5DFC
	.incbin "baserom.gba", 0x4e5dfc, 0xc
	.globl gUnknown_84E5E08
gUnknown_84E5E08: @ 0x084E5E08
	.incbin "baserom.gba", 0x4e5e08, 0x4
	.globl gUnknown_84E5E0C
gUnknown_84E5E0C: @ 0x084E5E0C
	.incbin "baserom.gba", 0x4e5e0c, 0xc
	.globl gUnknown_84E5E18
gUnknown_84E5E18: @ 0x084E5E18
	.incbin "baserom.gba", 0x4e5e18, 0x4
	.globl gUnknown_84E5E1C
gUnknown_84E5E1C: @ 0x084E5E1C
	.incbin "baserom.gba", 0x4e5e1c, 0xc
	.globl gUnknown_84E5E28
gUnknown_84E5E28: @ 0x084E5E28
	.incbin "baserom.gba", 0x4e5e28, 0x4
	.globl gUnknown_84E5E2C
gUnknown_84E5E2C: @ 0x084E5E2C
	.incbin "baserom.gba", 0x4e5e2c, 0xc
	.globl gUnknown_84E5E38
gUnknown_84E5E38: @ 0x084E5E38
	.incbin "baserom.gba", 0x4e5e38, 0x4
	.globl gUnknown_84E5E3C
gUnknown_84E5E3C: @ 0x084E5E3C
	.incbin "baserom.gba", 0x4e5e3c, 0xc
	.globl gUnknown_84E5E48
gUnknown_84E5E48: @ 0x084E5E48
	.incbin "baserom.gba", 0x4e5e48, 0x4
	.globl gUnknown_84E5E4C
gUnknown_84E5E4C: @ 0x084E5E4C
	.incbin "baserom.gba", 0x4e5e4c, 0xc
	.globl gUnknown_84E5E58
gUnknown_84E5E58: @ 0x084E5E58
	.incbin "baserom.gba", 0x4e5e58, 0x4
	.globl gUnknown_84E5E5C
gUnknown_84E5E5C: @ 0x084E5E5C
	.incbin "baserom.gba", 0x4e5e5c, 0xc
	.globl gUnknown_84E5E68
gUnknown_84E5E68: @ 0x084E5E68
	.incbin "baserom.gba", 0x4e5e68, 0x4
	.globl gUnknown_84E5E6C
gUnknown_84E5E6C: @ 0x084E5E6C
	.incbin "baserom.gba", 0x4e5e6c, 0xc
	.globl gUnknown_84E5E78
gUnknown_84E5E78: @ 0x084E5E78
	.incbin "baserom.gba", 0x4e5e78, 0x4
	.globl gUnknown_84E5E7C
gUnknown_84E5E7C: @ 0x084E5E7C
	.incbin "baserom.gba", 0x4e5e7c, 0xc
	.globl gUnknown_84E5E88
gUnknown_84E5E88: @ 0x084E5E88
	.incbin "baserom.gba", 0x4e5e88, 0x4
	.globl gUnknown_84E5E8C
gUnknown_84E5E8C: @ 0x084E5E8C
	.incbin "baserom.gba", 0x4e5e8c, 0xc
	.globl gUnknown_84E5E98
gUnknown_84E5E98: @ 0x084E5E98
	.incbin "baserom.gba", 0x4e5e98, 0x4
	.globl gUnknown_84E5E9C
gUnknown_84E5E9C: @ 0x084E5E9C
	.incbin "baserom.gba", 0x4e5e9c, 0xc
	.globl gUnknown_84E5EA8
gUnknown_84E5EA8: @ 0x084E5EA8
	.incbin "baserom.gba", 0x4e5ea8, 0x4
	.globl gUnknown_84E5EAC
gUnknown_84E5EAC: @ 0x084E5EAC
	.incbin "baserom.gba", 0x4e5eac, 0xc
	.globl gUnknown_84E5EB8
gUnknown_84E5EB8: @ 0x084E5EB8
	.incbin "baserom.gba", 0x4e5eb8, 0x2c
	.globl gUnknown_84E5EE4
gUnknown_84E5EE4: @ 0x084E5EE4
	.incbin "baserom.gba", 0x4e5ee4, 0xc
	.globl gUnknown_84E5EF0
gUnknown_84E5EF0: @ 0x084E5EF0
	.incbin "baserom.gba", 0x4e5ef0, 0x4
	.globl gUnknown_84E5EF4
gUnknown_84E5EF4: @ 0x084E5EF4
	.incbin "baserom.gba", 0x4e5ef4, 0x8
	.globl gUnknown_84E5EFC
gUnknown_84E5EFC: @ 0x084E5EFC
	.incbin "baserom.gba", 0x4e5efc, 0x8
	.globl gUnknown_84E5F04
gUnknown_84E5F04: @ 0x084E5F04
	.incbin "baserom.gba", 0x4e5f04, 0x8
	.globl gUnknown_84E5F0C
gUnknown_84E5F0C: @ 0x084E5F0C
	.incbin "baserom.gba", 0x4e5f0c, 0x8
	.globl gUnknown_84E5F14
gUnknown_84E5F14: @ 0x084E5F14
	.incbin "baserom.gba", 0x4e5f14, 0xc
	.globl gUnknown_84E5F20
gUnknown_84E5F20: @ 0x084E5F20
	.incbin "baserom.gba", 0x4e5f20, 0x9
	.globl gUnknown_84E5F29
gUnknown_84E5F29: @ 0x084E5F29
	.incbin "baserom.gba", 0x4e5f29, 0x9
	.globl gUnknown_84E5F32
gUnknown_84E5F32: @ 0x084E5F32
	.incbin "baserom.gba", 0x4e5f32, 0x9
	.globl gUnknown_84E5F3B
gUnknown_84E5F3B: @ 0x084E5F3B
	.incbin "baserom.gba", 0x4e5f3b, 0x9
	.globl gUnknown_84E5F44
gUnknown_84E5F44: @ 0x084E5F44
	.incbin "baserom.gba", 0x4e5f44, 0x9
	.globl gUnknown_84E5F4D
gUnknown_84E5F4D: @ 0x084E5F4D
	.incbin "baserom.gba", 0x4e5f4d, 0x9
	.globl gUnknown_84E5F56
gUnknown_84E5F56: @ 0x084E5F56
	.incbin "baserom.gba", 0x4e5f56, 0x9
	.globl gUnknown_84E5F5F
gUnknown_84E5F5F: @ 0x084E5F5F
	.incbin "baserom.gba", 0x4e5f5f, 0x9
	.globl gUnknown_84E5F68
gUnknown_84E5F68: @ 0x084E5F68
	.incbin "baserom.gba", 0x4e5f68, 0x9
	.globl gUnknown_84E5F71
gUnknown_84E5F71: @ 0x084E5F71
	.incbin "baserom.gba", 0x4e5f71, 0x9
	.globl gUnknown_84E5F7A
gUnknown_84E5F7A: @ 0x084E5F7A
	.incbin "baserom.gba", 0x4e5f7a, 0x9
	.globl gUnknown_84E5F83
gUnknown_84E5F83: @ 0x084E5F83
	.incbin "baserom.gba", 0x4e5f83, 0x9
	.globl gUnknown_84E5F8C
gUnknown_84E5F8C: @ 0x084E5F8C
	.incbin "baserom.gba", 0x4e5f8c, 0x9
	.globl gUnknown_84E5F95
gUnknown_84E5F95: @ 0x084E5F95
	.incbin "baserom.gba", 0x4e5f95, 0x9
	.globl gUnknown_84E5F9E
gUnknown_84E5F9E: @ 0x084E5F9E
	.incbin "baserom.gba", 0x4e5f9e, 0x9
	.globl gUnknown_84E5FA7
gUnknown_84E5FA7: @ 0x084E5FA7
	.incbin "baserom.gba", 0x4e5fa7, 0x9
	.globl gUnknown_84E5FB0
gUnknown_84E5FB0: @ 0x084E5FB0
	.incbin "baserom.gba", 0x4e5fb0, 0x10
	.globl gUnknown_84E5FC0
gUnknown_84E5FC0: @ 0x084E5FC0
	.incbin "baserom.gba", 0x4e5fc0, 0x10
	.globl gUnknown_84E5FD0
gUnknown_84E5FD0: @ 0x084E5FD0
	.incbin "baserom.gba", 0x4e5fd0, 0x24
	.globl gUnknown_84E5FF4
gUnknown_84E5FF4: @ 0x084E5FF4
	.incbin "baserom.gba", 0x4e5ff4, 0x5
	.globl gUnknown_84E5FF9
gUnknown_84E5FF9: @ 0x084E5FF9
	.incbin "baserom.gba", 0x4e5ff9, 0x5
	.globl gUnknown_84E5FFE
gUnknown_84E5FFE: @ 0x084E5FFE
	.incbin "baserom.gba", 0x4e5ffe, 0x5
	.globl gUnknown_84E6003
gUnknown_84E6003: @ 0x084E6003
	.incbin "baserom.gba", 0x4e6003, 0x5
	.globl gUnknown_84E6008
gUnknown_84E6008: @ 0x084E6008
	.incbin "baserom.gba", 0x4e6008, 0x5
	.globl gUnknown_84E600D
gUnknown_84E600D: @ 0x084E600D
	.incbin "baserom.gba", 0x4e600d, 0x5
	.globl gUnknown_84E6012
gUnknown_84E6012: @ 0x084E6012
	.incbin "baserom.gba", 0x4e6012, 0x5
	.globl gUnknown_84E6017
gUnknown_84E6017: @ 0x084E6017
	.incbin "baserom.gba", 0x4e6017, 0x5
	.globl gUnknown_84E601C
gUnknown_84E601C: @ 0x084E601C
	.incbin "baserom.gba", 0x4e601c, 0x5
	.globl gUnknown_84E6021
gUnknown_84E6021: @ 0x084E6021
	.incbin "baserom.gba", 0x4e6021, 0x5
	.globl gUnknown_84E6026
gUnknown_84E6026: @ 0x084E6026
	.incbin "baserom.gba", 0x4e6026, 0x5
	.globl gUnknown_84E602B
gUnknown_84E602B: @ 0x084E602B
	.incbin "baserom.gba", 0x4e602b, 0x5
	.globl gUnknown_84E6030
gUnknown_84E6030: @ 0x084E6030
	.incbin "baserom.gba", 0x4e6030, 0x5
	.globl gUnknown_84E6035
gUnknown_84E6035: @ 0x084E6035
	.incbin "baserom.gba", 0x4e6035, 0x5
	.globl gUnknown_84E603A
gUnknown_84E603A: @ 0x084E603A
	.incbin "baserom.gba", 0x4e603a, 0x5
	.globl gUnknown_84E603F
gUnknown_84E603F: @ 0x084E603F
	.incbin "baserom.gba", 0x4e603f, 0x5
	.globl gUnknown_84E6044
gUnknown_84E6044: @ 0x084E6044
	.incbin "baserom.gba", 0x4e6044, 0x5
	.globl gUnknown_84E6049
gUnknown_84E6049: @ 0x084E6049
	.incbin "baserom.gba", 0x4e6049, 0x5
	.globl gUnknown_84E604E
gUnknown_84E604E: @ 0x084E604E
	.incbin "baserom.gba", 0x4e604e, 0x5
	.globl gUnknown_84E6053
gUnknown_84E6053: @ 0x084E6053
	.incbin "baserom.gba", 0x4e6053, 0x5
	.globl gUnknown_84E6058
gUnknown_84E6058: @ 0x084E6058
	.incbin "baserom.gba", 0x4e6058, 0x5
	.globl gUnknown_84E605D
gUnknown_84E605D: @ 0x084E605D
	.incbin "baserom.gba", 0x4e605d, 0x5
	.globl gUnknown_84E6062
gUnknown_84E6062: @ 0x084E6062
	.incbin "baserom.gba", 0x4e6062, 0x5
	.globl gUnknown_84E6067
gUnknown_84E6067: @ 0x084E6067
	.incbin "baserom.gba", 0x4e6067, 0x5
	.globl gUnknown_84E606C
gUnknown_84E606C: @ 0x084E606C
	.incbin "baserom.gba", 0x4e606c, 0x5
	.globl gUnknown_84E6071
gUnknown_84E6071: @ 0x084E6071
	.incbin "baserom.gba", 0x4e6071, 0x5
	.globl gUnknown_84E6076
gUnknown_84E6076: @ 0x084E6076
	.incbin "baserom.gba", 0x4e6076, 0x5
	.globl gUnknown_84E607B
gUnknown_84E607B: @ 0x084E607B
	.incbin "baserom.gba", 0x4e607b, 0x8
	.globl gUnknown_84E6083
gUnknown_84E6083: @ 0x084E6083
	.incbin "baserom.gba", 0x4e6083, 0x10
	.globl gUnknown_84E6093
gUnknown_84E6093: @ 0x084E6093
	.incbin "baserom.gba", 0x4e6093, 0x11
	.globl gUnknown_84E60A4
gUnknown_84E60A4: @ 0x084E60A4
	.incbin "baserom.gba", 0x4e60a4, 0x298
	.globl gUnknown_84E633C
gUnknown_84E633C: @ 0x084E633C
	.incbin "baserom.gba", 0x4e633c, 0xd4
	.globl gUnknown_84E6410
gUnknown_84E6410: @ 0x084E6410
	.incbin "baserom.gba", 0x4e6410, 0x6
	.globl gUnknown_84E6416
gUnknown_84E6416: @ 0x084E6416
	.incbin "baserom.gba", 0x4e6416, 0x61a
	.globl gUnknown_84E6A30
gUnknown_84E6A30: @ 0x084E6A30
	.incbin "baserom.gba", 0x4e6a30, 0x8
	.globl gUnknown_84E6A38
gUnknown_84E6A38: @ 0x084E6A38
	.incbin "baserom.gba", 0x4e6a38, 0x18
	.globl gUnknown_84E6A50
gUnknown_84E6A50: @ 0x084E6A50
	.incbin "baserom.gba", 0x4e6a50, 0x18
	.globl gUnknown_84E6A68
gUnknown_84E6A68: @ 0x084E6A68
	.incbin "baserom.gba", 0x4e6a68, 0x10
	.globl gUnknown_84E6A78
gUnknown_84E6A78: @ 0x084E6A78
	.incbin "baserom.gba", 0x4e6a78, 0x10
	.globl gUnknown_84E6A88
gUnknown_84E6A88: @ 0x084E6A88
	.incbin "baserom.gba", 0x4e6a88, 0x10
	.globl gUnknown_84E6A98
gUnknown_84E6A98: @ 0x084E6A98
	.incbin "baserom.gba", 0x4e6a98, 0x10
	.globl gUnknown_84E6AA8
gUnknown_84E6AA8: @ 0x084E6AA8
	.incbin "baserom.gba", 0x4e6aa8, 0xc
	.globl gUnknown_84E6AB4
gUnknown_84E6AB4: @ 0x084E6AB4
	.incbin "baserom.gba", 0x4e6ab4, 0x4
	.globl gUnknown_84E6AB8
gUnknown_84E6AB8: @ 0x084E6AB8
	.incbin "baserom.gba", 0x4e6ab8, 0x10
	.globl gUnknown_84E6AC8
gUnknown_84E6AC8: @ 0x084E6AC8
	.incbin "baserom.gba", 0x4e6ac8, 0xe0
	.globl gUnknown_84E6BA8
gUnknown_84E6BA8: @ 0x084E6BA8
	.incbin "baserom.gba", 0x4e6ba8, 0x14
	.globl gUnknown_84E6BBC
gUnknown_84E6BBC: @ 0x084E6BBC
	.incbin "baserom.gba", 0x4e6bbc, 0xa
	.globl gUnknown_84E6BC6
gUnknown_84E6BC6: @ 0x084E6BC6
	.incbin "baserom.gba", 0x4e6bc6, 0x48
	.globl gUnknown_84E6C0E
gUnknown_84E6C0E: @ 0x084E6C0E
	.incbin "baserom.gba", 0x4e6c0e, 0x7a
	.globl gUnknown_84E6C88
gUnknown_84E6C88: @ 0x084E6C88
	.incbin "baserom.gba", 0x4e6c88, 0xc
	.globl gUnknown_84E6C94
gUnknown_84E6C94: @ 0x084E6C94
	.incbin "baserom.gba", 0x4e6c94, 0x6
	.globl gUnknown_84E6C9A
gUnknown_84E6C9A: @ 0x084E6C9A
	.incbin "baserom.gba", 0x4e6c9a, 0x4
	.globl gUnknown_84E6C9E
gUnknown_84E6C9E: @ 0x084E6C9E
	.incbin "baserom.gba", 0x4e6c9e, 0x6
	.globl gUnknown_84E6CA4
gUnknown_84E6CA4: @ 0x084E6CA4
	.incbin "baserom.gba", 0x4e6ca4, 0x4
	.globl gUnknown_84E6CA8
gUnknown_84E6CA8: @ 0x084E6CA8
	.incbin "baserom.gba", 0x4e6ca8, 0xc
	.globl gUnknown_84E6CB4
gUnknown_84E6CB4: @ 0x084E6CB4
	.incbin "baserom.gba", 0x4e6cb4, 0x2c
	.globl gUnknown_84E6CE0
gUnknown_84E6CE0: @ 0x084E6CE0
	.incbin "baserom.gba", 0x4e6ce0, 0x25f

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4E6F3F
gText_Rom_4E6F3F: @ 0x084E6F3F
	.string "z    $"
	.if (. - gText_Rom_4E6F3F) > 0x6
	.error "gText_Rom_4E6F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E6F3F) < 0x6
	.space 0x6 - (. - gText_Rom_4E6F3F)
	.endif
	.incbin "baserom.gba", 0x4e6f45, 0x11a

	@ src/text_input_strings.c:39 gText_UnionRoomChatKeyboard_z
	.globl gText_Rom_4E705F
gText_Rom_4E705F: @ 0x084E705F
	.string "z    $"
	.if (. - gText_Rom_4E705F) > 0x6
	.error "gText_Rom_4E705F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E705F) < 0x6
	.space 0x6 - (. - gText_Rom_4E705F)
	.endif
	.incbin "baserom.gba", 0x4e7065, 0x12fb
	.globl gUnknown_84E8360
gUnknown_84E8360: @ 0x084E8360
	.incbin "baserom.gba", 0x4e8360, 0x280
	.globl gUnknown_84E85E0
gUnknown_84E85E0: @ 0x084E85E0
	.incbin "baserom.gba", 0x4e85e0, 0x1c0
	.globl gUnknown_84E87A0
gUnknown_84E87A0: @ 0x084E87A0
	.incbin "baserom.gba", 0x4e87a0, 0xa0
	.globl gUnknown_84E8840
gUnknown_84E8840: @ 0x084E8840
	.incbin "baserom.gba", 0x4e8840, 0x20
	.globl gUnknown_84E8860
gUnknown_84E8860: @ 0x084E8860
	.incbin "baserom.gba", 0x4e8860, 0xa0
	.globl gUnknown_84E8900
gUnknown_84E8900: @ 0x084E8900
	.incbin "baserom.gba", 0x4e8900, 0x4
	.globl gUnknown_84E8904
gUnknown_84E8904: @ 0x084E8904
	.incbin "baserom.gba", 0x4e8904, 0x14
	.globl gUnknown_84E8918
gUnknown_84E8918: @ 0x084E8918
	.incbin "baserom.gba", 0x4e8918, 0xc
	.globl gUnknown_84E8924
gUnknown_84E8924: @ 0x084E8924
	.incbin "baserom.gba", 0x4e8924, 0x68
	.globl gUnknown_84E898C
gUnknown_84E898C: @ 0x084E898C
	.incbin "baserom.gba", 0x4e898c, 0x20
	.globl gUnknown_84E89AC
gUnknown_84E89AC: @ 0x084E89AC
	.incbin "baserom.gba", 0x4e89ac, 0x20
	.globl gUnknown_84E89CC
gUnknown_84E89CC: @ 0x084E89CC
	.incbin "baserom.gba", 0x4e89cc, 0x20
	.globl gUnknown_84E89EC
gUnknown_84E89EC: @ 0x084E89EC
	.incbin "baserom.gba", 0x4e89ec, 0x20
	.globl gUnknown_84E8A0C
gUnknown_84E8A0C: @ 0x084E8A0C
	.incbin "baserom.gba", 0x4e8a0c, 0x34
	.globl gUnknown_84E8A40
gUnknown_84E8A40: @ 0x084E8A40
	.incbin "baserom.gba", 0x4e8a40, 0x8
	.globl gUnknown_84E8A48
gUnknown_84E8A48: @ 0x084E8A48
	.incbin "baserom.gba", 0x4e8a48, 0x4
	.globl gUnknown_84E8A4C
gUnknown_84E8A4C: @ 0x084E8A4C
	.incbin "baserom.gba", 0x4e8a4c, 0x18
	.globl gUnknown_84E8A64
gUnknown_84E8A64: @ 0x084E8A64
	.incbin "baserom.gba", 0x4e8a64, 0x8
	.globl gUnknown_84E8A6C
gUnknown_84E8A6C: @ 0x084E8A6C

	@ asm/reset_rtc_screen.s:427 PrintTime
	.globl gText_Rom_4E8A6C
gText_Rom_4E8A6C: @ 0x084E8A6C
	.string "にち$"
	.if (. - gText_Rom_4E8A6C) > 0x3
	.error "gText_Rom_4E8A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A6C) < 0x3
	.space 0x3 - (. - gText_Rom_4E8A6C)
	.endif
	.globl gUnknown_84E8A6F
gUnknown_84E8A6F: @ 0x084E8A6F
	.incbin "baserom.gba", 0x4e8a6f, 0x2
	.globl gUnknown_84E8A71
gUnknown_84E8A71: @ 0x084E8A71

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_4E8A71
gText_Rom_4E8A71: @ 0x084E8A71
	.string "けってい$"
	.if (. - gText_Rom_4E8A71) > 0x5
	.error "gText_Rom_4E8A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8A71) < 0x5
	.space 0x5 - (. - gText_Rom_4E8A71)
	.endif
	.incbin "baserom.gba", 0x4e8a76, 0x9e
	.globl gUnknown_84E8B14
gUnknown_84E8B14: @ 0x084E8B14
	.incbin "baserom.gba", 0x4e8b14, 0x2c
	.globl gUnknown_84E8B40
gUnknown_84E8B40: @ 0x084E8B40
	.incbin "baserom.gba", 0x4e8b40, 0x18

	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_4E8B58
gText_Rom_4E8B58: @ 0x084E8B58
	.string "ずかん$"
	.if (. - gText_Rom_4E8B58) > 0x4
	.error "gText_Rom_4E8B58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B58) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B58)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_4E8B5C
gText_Rom_4E8B5C: @ 0x084E8B5C
	.string "ポケモン$"
	.if (. - gText_Rom_4E8B5C) > 0x5
	.error "gText_Rom_4E8B5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B5C) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B5C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_4E8B61
gText_Rom_4E8B61: @ 0x084E8B61
	.string "バッグ$"
	.if (. - gText_Rom_4E8B61) > 0x4
	.error "gText_Rom_4E8B61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B61) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B61)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_4E8B65
gText_Rom_4E8B65: @ 0x084E8B65
	.string "ポケナビ$"
	.if (. - gText_Rom_4E8B65) > 0x5
	.error "gText_Rom_4E8B65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B65) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B65)
	.endif
	.incbin "baserom.gba", 0x4e8b6a, 0x3

	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl gText_Rom_4E8B6D
gText_Rom_4E8B6D: @ 0x084E8B6D
	.string "レポート$"
	.if (. - gText_Rom_4E8B6D) > 0x5
	.error "gText_Rom_4E8B6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B6D) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B6D)
	.endif

	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Rom_4E8B72
gText_Rom_4E8B72: @ 0x084E8B72
	.string "せってい$"
	.if (. - gText_Rom_4E8B72) > 0x5
	.error "gText_Rom_4E8B72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B72) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B72)
	.endif

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_4E8B77
gText_Rom_4E8B77: @ 0x084E8B77
	.string "とじる$"
	.if (. - gText_Rom_4E8B77) > 0x4
	.error "gText_Rom_4E8B77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B77) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B77)
	.endif

	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Rom_4E8B7B
gText_Rom_4E8B7B: @ 0x084E8B7B
	.string "リタイア$"
	.if (. - gText_Rom_4E8B7B) > 0x5
	.error "gText_Rom_4E8B7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B7B) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B7B)
	.endif

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rom_4E8B80
gText_Rom_4E8B80: @ 0x084E8B80
	.string "やすむ$"
	.if (. - gText_Rom_4E8B80) > 0x4
	.error "gText_Rom_4E8B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B80) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B80)
	.endif
	.globl gUnknown_84E8B84
gUnknown_84E8B84: @ 0x084E8B84

	@ src/strings.c:950 gText_SafariBallStock
	.globl gText_Rom_4E8B84
gText_Rom_4E8B84: @ 0x084E8B84
	.string "サファリボール\nのこり {STR_VAR_1}コ$"
	.if (. - gText_Rom_4E8B84) > 0x10
	.error "gText_Rom_4E8B84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B84) < 0x10
	.space 0x10 - (. - gText_Rom_4E8B84)
	.endif
	.globl gUnknown_84E8B94
gUnknown_84E8B94: @ 0x084E8B94
	.incbin "baserom.gba", 0x4e8b94, 0x8
	.globl gUnknown_84E8B9C
gUnknown_84E8B9C: @ 0x084E8B9C

	@ src/strings.c:952 gText_BattlePyramidFloor
	.globl gText_Rom_4E8B9C
gText_Rom_4E8B9C: @ 0x084E8B9C
	.string "バトルピラミッド\n{STR_VAR_1}$"
	.if (. - gText_Rom_4E8B9C) > 0xc
	.error "gText_Rom_4E8B9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B9C) < 0xc
	.space 0xc - (. - gText_Rom_4E8B9C)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BA8
gText_Rom_4E8BA8: @ 0x084E8BA8
	.string "げんざい　1だんめ$"
	.if (. - gText_Rom_4E8BA8) > 0xa
	.error "gText_Rom_4E8BA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BA8) < 0xa
	.space 0xa - (. - gText_Rom_4E8BA8)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BB2
gText_Rom_4E8BB2: @ 0x084E8BB2
	.string "げんざい　2だんめ$"
	.if (. - gText_Rom_4E8BB2) > 0xa
	.error "gText_Rom_4E8BB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BB2) < 0xa
	.space 0xa - (. - gText_Rom_4E8BB2)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BBC
gText_Rom_4E8BBC: @ 0x084E8BBC
	.string "げんざい　3だんめ$"
	.if (. - gText_Rom_4E8BBC) > 0xa
	.error "gText_Rom_4E8BBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BBC) < 0xa
	.space 0xa - (. - gText_Rom_4E8BBC)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BC6
gText_Rom_4E8BC6: @ 0x084E8BC6
	.string "げんざい　4だんめ$"
	.if (. - gText_Rom_4E8BC6) > 0xa
	.error "gText_Rom_4E8BC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BC6) < 0xa
	.space 0xa - (. - gText_Rom_4E8BC6)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BD0
gText_Rom_4E8BD0: @ 0x084E8BD0
	.string "げんざい　5だんめ$"
	.if (. - gText_Rom_4E8BD0) > 0xa
	.error "gText_Rom_4E8BD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BD0) < 0xa
	.space 0xa - (. - gText_Rom_4E8BD0)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BDA
gText_Rom_4E8BDA: @ 0x084E8BDA
	.string "げんざい　6だんめ$"
	.if (. - gText_Rom_4E8BDA) > 0xa
	.error "gText_Rom_4E8BDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BDA) < 0xa
	.space 0xa - (. - gText_Rom_4E8BDA)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BE4
gText_Rom_4E8BE4: @ 0x084E8BE4
	.string "げんざい　7だんめ$"
	.if (. - gText_Rom_4E8BE4) > 0xa
	.error "gText_Rom_4E8BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BE4) < 0xa
	.space 0xa - (. - gText_Rom_4E8BE4)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BEE
gText_Rom_4E8BEE: @ 0x084E8BEE
	.string "げんざい　ちょうじょう$"
	.if (. - gText_Rom_4E8BEE) > 0xc
	.error "gText_Rom_4E8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BEE) < 0xc
	.space 0xc - (. - gText_Rom_4E8BEE)
	.endif
	.incbin "baserom.gba", 0x4e8bfa, 0x2
	.globl gUnknown_84E8BFC
gUnknown_84E8BFC: @ 0x084E8BFC
	.incbin "baserom.gba", 0x4e8bfc, 0x20
	.globl gUnknown_84E8C1C
gUnknown_84E8C1C: @ 0x084E8C1C
	.incbin "baserom.gba", 0x4e8c1c, 0x8
	.globl gUnknown_84E8C24
gUnknown_84E8C24: @ 0x084E8C24
	.incbin "baserom.gba", 0x4e8c24, 0x8
	.globl gUnknown_84E8C2C
gUnknown_84E8C2C: @ 0x084E8C2C
	.incbin "baserom.gba", 0x4e8c2c, 0x68
	.globl gUnknown_84E8C94
gUnknown_84E8C94: @ 0x084E8C94
	.incbin "baserom.gba", 0x4e8c94, 0x4
	.globl gUnknown_84E8C98
gUnknown_84E8C98: @ 0x084E8C98
	.incbin "baserom.gba", 0x4e8c98, 0x10
	.globl gUnknown_84E8CA8
gUnknown_84E8CA8: @ 0x084E8CA8
	.incbin "baserom.gba", 0x4e8ca8, 0x8
	.globl gUnknown_84E8CB0
gUnknown_84E8CB0: @ 0x084E8CB0

	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_4E8CB0
gText_Rom_4E8CB0: @ 0x084E8CB0
	.string "しゅじんこう$"
	.if (. - gText_Rom_4E8CB0) > 0x7
	.error "gText_Rom_4E8CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB0) < 0x7
	.space 0x7 - (. - gText_Rom_4E8CB0)
	.endif
	.globl gUnknown_84E8CB7
gUnknown_84E8CB7: @ 0x084E8CB7

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_Rom_4E8CB7
gText_Rom_4E8CB7: @ 0x084E8CB7
	.string "もっているバッジ$"
	.if (. - gText_Rom_4E8CB7) > 0x9
	.error "gText_Rom_4E8CB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB7) < 0x9
	.space 0x9 - (. - gText_Rom_4E8CB7)
	.endif
	.globl gUnknown_84E8CC0
gUnknown_84E8CC0: @ 0x084E8CC0

	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_4E8CC0
gText_Rom_4E8CC0: @ 0x084E8CC0
	.string "ポケモンずかん$"
	.if (. - gText_Rom_4E8CC0) != 0x8
	.error "gText_Rom_4E8CC0 must retain its original byte length"
	.endif
	.globl gText_Rom_4E8CC4
	.set gText_Rom_4E8CC4, gText_Rom_4E8CC0 + 0x4
	.globl gUnknown_84E8CC8
gUnknown_84E8CC8: @ 0x084E8CC8

	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_4E8CC8
gText_Rom_4E8CC8: @ 0x084E8CC8
	.string "プレイじかん$"
	.if (. - gText_Rom_4E8CC8) != 0x7
	.error "gText_Rom_4E8CC8 must retain its original byte length"
	.endif
	.globl gText_Rom_4E8CCB
	.set gText_Rom_4E8CCB, gText_Rom_4E8CC8 + 0x3
	.incbin "baserom.gba", 0x4e8ccf, 0x1a1
	.globl gUnknown_84E8E70
gUnknown_84E8E70: @ 0x084E8E70
	.incbin "baserom.gba", 0x4e8e70, 0xb60
	.globl gUnknown_84E99D0
gUnknown_84E99D0: @ 0x084E99D0
	.incbin "baserom.gba", 0x4e99d0, 0x908
	.globl gUnknown_84EA2D8
gUnknown_84EA2D8: @ 0x084EA2D8
	.incbin "baserom.gba", 0x4ea2d8, 0x9a8
	.globl gUnknown_84EAC80
gUnknown_84EAC80: @ 0x084EAC80
	.incbin "baserom.gba", 0x4eac80, 0x8e0
	.globl gUnknown_84EB560
gUnknown_84EB560: @ 0x084EB560
	.incbin "baserom.gba", 0x4eb560, 0x320
	.globl gUnknown_84EB880
gUnknown_84EB880: @ 0x084EB880
	.incbin "baserom.gba", 0x4eb880, 0x510
	.globl gUnknown_84EBD90
gUnknown_84EBD90: @ 0x084EBD90
	.incbin "baserom.gba", 0x4ebd90, 0x210
	.globl gUnknown_84EBFA0
gUnknown_84EBFA0: @ 0x084EBFA0
	.incbin "baserom.gba", 0x4ebfa0, 0xb50
	.globl gUnknown_84ECAF0
gUnknown_84ECAF0: @ 0x084ECAF0
	.incbin "baserom.gba", 0x4ecaf0, 0x210
	.globl gUnknown_84ECD00
gUnknown_84ECD00: @ 0x084ECD00
	.incbin "baserom.gba", 0x4ecd00, 0x810
	.globl gUnknown_84ED510
gUnknown_84ED510: @ 0x084ED510
	.incbin "baserom.gba", 0x4ed510, 0x540
	.globl gUnknown_84EDA50
gUnknown_84EDA50: @ 0x084EDA50
	.incbin "baserom.gba", 0x4eda50, 0x20
	.globl gUnknown_84EDA70
gUnknown_84EDA70: @ 0x084EDA70
	.incbin "baserom.gba", 0x4eda70, 0x20
	.globl gUnknown_84EDA90
gUnknown_84EDA90: @ 0x084EDA90
	.incbin "baserom.gba", 0x4eda90, 0x30
	.globl gUnknown_84EDAC0
gUnknown_84EDAC0: @ 0x084EDAC0
	.incbin "baserom.gba", 0x4edac0, 0x30
	.globl gUnknown_84EDAF0
gUnknown_84EDAF0: @ 0x084EDAF0
	.incbin "baserom.gba", 0x4edaf0, 0x10
	.globl gUnknown_84EDB00
gUnknown_84EDB00: @ 0x084EDB00
	.incbin "baserom.gba", 0x4edb00, 0x410
	.globl gUnknown_84EDF10
gUnknown_84EDF10: @ 0x084EDF10
	.incbin "baserom.gba", 0x4edf10, 0x20
	.globl gUnknown_84EDF30
gUnknown_84EDF30: @ 0x084EDF30
	.incbin "baserom.gba", 0x4edf30, 0x140
	.globl gUnknown_84EE070
gUnknown_84EE070: @ 0x084EE070
	.incbin "baserom.gba", 0x4ee070, 0x428
	.globl gUnknown_84EE498
gUnknown_84EE498: @ 0x084EE498
	.incbin "baserom.gba", 0x4ee498, 0x430
	.globl gUnknown_84EE8C8
gUnknown_84EE8C8: @ 0x084EE8C8
	.incbin "baserom.gba", 0x4ee8c8, 0x20
	.globl gUnknown_84EE8E8
gUnknown_84EE8E8: @ 0x084EE8E8
	.incbin "baserom.gba", 0x4ee8e8, 0x320
	.globl gUnknown_84EEC08
gUnknown_84EEC08: @ 0x084EEC08
	.incbin "baserom.gba", 0x4eec08, 0x310
	.globl gUnknown_84EEF18
gUnknown_84EEF18: @ 0x084EEF18
	.incbin "baserom.gba", 0x4eef18, 0x310
	.globl gUnknown_84EF228
gUnknown_84EF228: @ 0x084EF228
	.incbin "baserom.gba", 0x4ef228, 0x210
	.globl gUnknown_84EF438
gUnknown_84EF438: @ 0x084EF438
	.incbin "baserom.gba", 0x4ef438, 0x110
	.globl gUnknown_84EF548
gUnknown_84EF548: @ 0x084EF548
	.incbin "baserom.gba", 0x4ef548, 0xc08
	.globl gUnknown_84F0150
gUnknown_84F0150: @ 0x084F0150
	.incbin "baserom.gba", 0x4f0150, 0xc
	.globl gUnknown_84F015C
gUnknown_84F015C: @ 0x084F015C
	.incbin "baserom.gba", 0x4f015c, 0x1ac
	.globl gUnknown_84F0308
gUnknown_84F0308: @ 0x084F0308
	.incbin "baserom.gba", 0x4f0308, 0x10
	.globl gUnknown_84F0318
gUnknown_84F0318: @ 0x084F0318
	.incbin "baserom.gba", 0x4f0318, 0x428
	.globl gUnknown_84F0740
gUnknown_84F0740: @ 0x084F0740
	.incbin "baserom.gba", 0x4f0740, 0x268
	.globl gUnknown_84F09A8
gUnknown_84F09A8: @ 0x084F09A8
	.incbin "baserom.gba", 0x4f09a8, 0x8028
	.globl gUnknown_84F89D0
gUnknown_84F89D0: @ 0x084F89D0
	.incbin "baserom.gba", 0x4f89d0, 0x45a0
	.globl gUnknown_84FCF70
gUnknown_84FCF70: @ 0x084FCF70
	.incbin "baserom.gba", 0x4fcf70, 0xc
	.globl gUnknown_84FCF7C
gUnknown_84FCF7C: @ 0x084FCF7C
	.incbin "baserom.gba", 0x4fcf7c, 0xc
	.globl gUnknown_84FCF88
gUnknown_84FCF88: @ 0x084FCF88
	.incbin "baserom.gba", 0x4fcf88, 0x10
	.globl gUnknown_84FCF98
gUnknown_84FCF98: @ 0x084FCF98
	.incbin "baserom.gba", 0x4fcf98, 0x10
	.globl gUnknown_84FCFA8
gUnknown_84FCFA8: @ 0x084FCFA8
	.incbin "baserom.gba", 0x4fcfa8, 0x20
	.globl gUnknown_84FCFC8
gUnknown_84FCFC8: @ 0x084FCFC8
	.incbin "baserom.gba", 0x4fcfc8, 0x288
	.globl gUnknown_84FD250
gUnknown_84FD250: @ 0x084FD250
	.incbin "baserom.gba", 0x4fd250, 0x1d0
	.globl gUnknown_84FD420
gUnknown_84FD420: @ 0x084FD420
	.incbin "baserom.gba", 0x4fd420, 0x270
	.globl gUnknown_84FD690
gUnknown_84FD690: @ 0x084FD690
	.incbin "baserom.gba", 0x4fd690, 0x308
	.globl gUnknown_84FD998
gUnknown_84FD998: @ 0x084FD998
	.incbin "baserom.gba", 0x4fd998, 0x120
	.globl gUnknown_84FDAB8
gUnknown_84FDAB8: @ 0x084FDAB8
	.incbin "baserom.gba", 0x4fdab8, 0x270
	.globl gUnknown_84FDD28
gUnknown_84FDD28: @ 0x084FDD28
	.incbin "baserom.gba", 0x4fdd28, 0x270
	.globl gUnknown_84FDF98
gUnknown_84FDF98: @ 0x084FDF98
	.incbin "baserom.gba", 0x4fdf98, 0x308
	.globl gUnknown_84FE2A0
gUnknown_84FE2A0: @ 0x084FE2A0
	.incbin "baserom.gba", 0x4fe2a0, 0x120
	.globl gUnknown_84FE3C0
gUnknown_84FE3C0: @ 0x084FE3C0
	.incbin "baserom.gba", 0x4fe3c0, 0xa0
	.globl gUnknown_84FE460
gUnknown_84FE460: @ 0x084FE460
	.incbin "baserom.gba", 0x4fe460, 0x144
	.globl gUnknown_84FE5A4
gUnknown_84FE5A4: @ 0x084FE5A4
	.incbin "baserom.gba", 0x4fe5a4, 0xc0
	.globl gUnknown_84FE664
gUnknown_84FE664: @ 0x084FE664
	.incbin "baserom.gba", 0x4fe664, 0x20
	.globl gUnknown_84FE684
gUnknown_84FE684: @ 0x084FE684
	.incbin "baserom.gba", 0x4fe684, 0x10
	.globl gUnknown_84FE694
gUnknown_84FE694: @ 0x084FE694
	.incbin "baserom.gba", 0x4fe694, 0x4
	.globl gUnknown_84FE698
gUnknown_84FE698: @ 0x084FE698
	.incbin "baserom.gba", 0x4fe698, 0x4
	.globl gUnknown_84FE69C
gUnknown_84FE69C: @ 0x084FE69C
	.incbin "baserom.gba", 0x4fe69c, 0x30
	.globl gUnknown_84FE6CC
gUnknown_84FE6CC: @ 0x084FE6CC
	.incbin "baserom.gba", 0x4fe6cc, 0x18fd0
	.globl gUnknown_851769C
gUnknown_851769C: @ 0x0851769C
	.incbin "baserom.gba", 0x51769c, 0x8
	.globl gUnknown_85176A4
gUnknown_85176A4: @ 0x085176A4
	.incbin "baserom.gba", 0x5176a4, 0x18
	.globl gUnknown_85176BC
gUnknown_85176BC: @ 0x085176BC
	.incbin "baserom.gba", 0x5176bc, 0x3e4
	.globl gUnknown_8517AA0
gUnknown_8517AA0: @ 0x08517AA0
	.incbin "baserom.gba", 0x517aa0, 0xb8
	.globl gUnknown_8517B58
gUnknown_8517B58: @ 0x08517B58
	.incbin "baserom.gba", 0x517b58, 0xc0
	.globl gUnknown_8517C18
gUnknown_8517C18: @ 0x08517C18
	.incbin "baserom.gba", 0x517c18, 0x1e9c
	.globl gUnknown_8519AB4
gUnknown_8519AB4: @ 0x08519AB4
	.incbin "baserom.gba", 0x519ab4, 0x7e4
	.globl gUnknown_851A298
gUnknown_851A298: @ 0x0851A298
	.incbin "baserom.gba", 0x51a298, 0x450
	.globl gUnknown_851A6E8
gUnknown_851A6E8: @ 0x0851A6E8
	.incbin "baserom.gba", 0x51a6e8, 0x2e4
	.globl gUnknown_851A9CC
gUnknown_851A9CC: @ 0x0851A9CC
	.incbin "baserom.gba", 0x51a9cc, 0x240
	.globl gUnknown_851AC0C
gUnknown_851AC0C: @ 0x0851AC0C
	.incbin "baserom.gba", 0x51ac0c, 0xa8
	.globl gUnknown_851ACB4
gUnknown_851ACB4: @ 0x0851ACB4
	.incbin "baserom.gba", 0x51acb4, 0x18
	.globl gUnknown_851ACCC
gUnknown_851ACCC: @ 0x0851ACCC
	.incbin "baserom.gba", 0x51accc, 0x18
	.globl gUnknown_851ACE4
gUnknown_851ACE4: @ 0x0851ACE4
	.incbin "baserom.gba", 0x51ace4, 0x90
	.globl gUnknown_851AD74
gUnknown_851AD74: @ 0x0851AD74
	.incbin "baserom.gba", 0x51ad74, 0x18
	.globl gUnknown_851AD8C
gUnknown_851AD8C: @ 0x0851AD8C
	.incbin "baserom.gba", 0x51ad8c, 0x10
	.globl gUnknown_851AD9C
gUnknown_851AD9C: @ 0x0851AD9C
	.incbin "baserom.gba", 0x51ad9c, 0x24
	.globl gUnknown_851ADC0
gUnknown_851ADC0: @ 0x0851ADC0
	.incbin "baserom.gba", 0x51adc0, 0x18
	.globl gUnknown_851ADD8
gUnknown_851ADD8: @ 0x0851ADD8
	.incbin "baserom.gba", 0x51add8, 0x10
	.globl gUnknown_851ADE8
gUnknown_851ADE8: @ 0x0851ADE8
	.incbin "baserom.gba", 0x51ade8, 0xc000
	.globl gUnknown_8526DE8
gUnknown_8526DE8: @ 0x08526DE8
	.incbin "baserom.gba", 0x526de8, 0x4
	.globl gUnknown_8526DEC
gUnknown_8526DEC: @ 0x08526DEC
	.incbin "baserom.gba", 0x526dec, 0xf0
	.globl gUnknown_8526EDC
gUnknown_8526EDC: @ 0x08526EDC
	.incbin "baserom.gba", 0x526edc, 0x10
	.globl gUnknown_8526EEC
gUnknown_8526EEC: @ 0x08526EEC
	.incbin "baserom.gba", 0x526eec, 0x20
	.globl gUnknown_8526F0C
gUnknown_8526F0C: @ 0x08526F0C
	.incbin "baserom.gba", 0x526f0c, 0x20
	.globl gUnknown_8526F2C
gUnknown_8526F2C: @ 0x08526F2C
	.incbin "baserom.gba", 0x526f2c, 0x20
	.globl gUnknown_8526F4C
gUnknown_8526F4C: @ 0x08526F4C
	.incbin "baserom.gba", 0x526f4c, 0x820
	.globl gUnknown_852776C
gUnknown_852776C: @ 0x0852776C
	.incbin "baserom.gba", 0x52776c, 0x3080
	.globl gUnknown_852A7EC
gUnknown_852A7EC: @ 0x0852A7EC
	.incbin "baserom.gba", 0x52a7ec, 0xc
	.globl gUnknown_852A7F8
gUnknown_852A7F8: @ 0x0852A7F8
	.incbin "baserom.gba", 0x52a7f8, 0x1c
	.globl gUnknown_852A814
gUnknown_852A814: @ 0x0852A814
	.incbin "baserom.gba", 0x52a814, 0x18
	.globl gUnknown_852A82C
gUnknown_852A82C: @ 0x0852A82C
	.incbin "baserom.gba", 0x52a82c, 0x9c
	.globl gUnknown_852A8C8
gUnknown_852A8C8: @ 0x0852A8C8
	.incbin "baserom.gba", 0x52a8c8, 0x18
	.globl gUnknown_852A8E0
gUnknown_852A8E0: @ 0x0852A8E0
	.incbin "baserom.gba", 0x52a8e0, 0x8
	.globl gUnknown_852A8E8
gUnknown_852A8E8: @ 0x0852A8E8
	.incbin "baserom.gba", 0x52a8e8, 0x8
	.globl gUnknown_852A8F0
gUnknown_852A8F0: @ 0x0852A8F0
	.incbin "baserom.gba", 0x52a8f0, 0x38
	.globl gUnknown_852A928
gUnknown_852A928: @ 0x0852A928
	.incbin "baserom.gba", 0x52a928, 0x8c
	.globl gUnknown_852A9B4
gUnknown_852A9B4: @ 0x0852A9B4
	.incbin "baserom.gba", 0x52a9b4, 0x18
	.globl gUnknown_852A9CC
gUnknown_852A9CC: @ 0x0852A9CC
	.incbin "baserom.gba", 0x52a9cc, 0x8
	.globl gUnknown_852A9D4
gUnknown_852A9D4: @ 0x0852A9D4
	.incbin "baserom.gba", 0x52a9d4, 0x20
	.globl gUnknown_852A9F4
gUnknown_852A9F4: @ 0x0852A9F4
	.incbin "baserom.gba", 0x52a9f4, 0x18
	.globl gUnknown_852AA0C
gUnknown_852AA0C: @ 0x0852AA0C
	.incbin "baserom.gba", 0x52aa0c, 0x1c
	.globl gUnknown_852AA28
gUnknown_852AA28: @ 0x0852AA28
	.incbin "baserom.gba", 0x52aa28, 0x38
	.globl gUnknown_852AA60
gUnknown_852AA60: @ 0x0852AA60
	.incbin "baserom.gba", 0x52aa60, 0x18
	.globl gUnknown_852AA78
gUnknown_852AA78: @ 0x0852AA78
	.incbin "baserom.gba", 0x52aa78, 0x8
	.globl gUnknown_852AA80
gUnknown_852AA80: @ 0x0852AA80
	.incbin "baserom.gba", 0x52aa80, 0xc
	.globl gUnknown_852AA8C
gUnknown_852AA8C: @ 0x0852AA8C
	.incbin "baserom.gba", 0x52aa8c, 0x8
	.globl gUnknown_852AA94
gUnknown_852AA94: @ 0x0852AA94
	.incbin "baserom.gba", 0x52aa94, 0x8
	.globl gUnknown_852AA9C
gUnknown_852AA9C: @ 0x0852AA9C
	.incbin "baserom.gba", 0x52aa9c, 0x44
	.globl gUnknown_852AAE0
gUnknown_852AAE0: @ 0x0852AAE0
	.incbin "baserom.gba", 0x52aae0, 0x18
	.globl gUnknown_852AAF8
gUnknown_852AAF8: @ 0x0852AAF8
	.incbin "baserom.gba", 0x52aaf8, 0x4
	.globl gUnknown_852AAFC
gUnknown_852AAFC: @ 0x0852AAFC
	.incbin "baserom.gba", 0x52aafc, 0x4
	.globl gUnknown_852AB00
gUnknown_852AB00: @ 0x0852AB00
	.incbin "baserom.gba", 0x52ab00, 0x14
	.globl gUnknown_852AB14
gUnknown_852AB14: @ 0x0852AB14
	.incbin "baserom.gba", 0x52ab14, 0x4
	.globl gUnknown_852AB18
gUnknown_852AB18: @ 0x0852AB18
	.incbin "baserom.gba", 0x52ab18, 0xc
	.globl gUnknown_852AB24
gUnknown_852AB24: @ 0x0852AB24
	.incbin "baserom.gba", 0x52ab24, 0x8
	.globl gUnknown_852AB2C
gUnknown_852AB2C: @ 0x0852AB2C
	.incbin "baserom.gba", 0x52ab2c, 0x8
	.globl gUnknown_852AB34
gUnknown_852AB34: @ 0x0852AB34
	.incbin "baserom.gba", 0x52ab34, 0xc
	.globl gUnknown_852AB40
gUnknown_852AB40: @ 0x0852AB40
	.incbin "baserom.gba", 0x52ab40, 0x3
	.globl gUnknown_852AB43
gUnknown_852AB43: @ 0x0852AB43
	.incbin "baserom.gba", 0x52ab43, 0x5
	.globl gUnknown_852AB48
gUnknown_852AB48: @ 0x0852AB48
	.incbin "baserom.gba", 0x52ab48, 0x48
	.globl gUnknown_852AB90
gUnknown_852AB90: @ 0x0852AB90
	.incbin "baserom.gba", 0x52ab90, 0x48
	.globl gUnknown_852ABD8
gUnknown_852ABD8: @ 0x0852ABD8
	.incbin "baserom.gba", 0x52abd8, 0x48
	.globl gUnknown_852AC20
gUnknown_852AC20: @ 0x0852AC20
	.incbin "baserom.gba", 0x52ac20, 0x48
	.globl gUnknown_852AC68
gUnknown_852AC68: @ 0x0852AC68
	.incbin "baserom.gba", 0x52ac68, 0x48
	.globl gUnknown_852ACB0
gUnknown_852ACB0: @ 0x0852ACB0
	.incbin "baserom.gba", 0x52acb0, 0x48
	.globl gUnknown_852ACF8
gUnknown_852ACF8: @ 0x0852ACF8
	.incbin "baserom.gba", 0x52acf8, 0x48
	.globl gUnknown_852AD40
gUnknown_852AD40: @ 0x0852AD40
	.incbin "baserom.gba", 0x52ad40, 0x4e0
	.globl gUnknown_852B220
gUnknown_852B220: @ 0x0852B220
	.incbin "baserom.gba", 0x52b220, 0x10
	.globl gUnknown_852B230
gUnknown_852B230: @ 0x0852B230

	@ src/strings.c:926 gText_NumPlayerLink
	.globl gText_Rom_52B230
gText_Rom_52B230: @ 0x0852B230
	.string "{STR_VAR_1}にん せつぞく$"
	.if (. - gText_Rom_52B230) > 0xa
	.error "gText_Rom_52B230 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B230) < 0xa
	.space 0xa - (. - gText_Rom_52B230)
	.endif
	.incbin "baserom.gba", 0x52b23a, 0x2
	.globl gUnknown_852B23C
gUnknown_852B23C: @ 0x0852B23C
	.incbin "baserom.gba", 0x52b23c, 0x3
	.globl gUnknown_852B23F
gUnknown_852B23F: @ 0x0852B23F
	.incbin "baserom.gba", 0x52b23f, 0x5

	@ src/strings.c:927 gText_BronzeCard
	.globl gText_Rom_52B244
gText_Rom_52B244: @ 0x0852B244
	.string "ブロンズ$"
	.if (. - gText_Rom_52B244) > 0x5
	.error "gText_Rom_52B244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B244) < 0x5
	.space 0x5 - (. - gText_Rom_52B244)
	.endif

	@ src/strings.c:928 gText_CopperCard
	.globl gText_Rom_52B249
gText_Rom_52B249: @ 0x0852B249
	.string "カッパー$"
	.if (. - gText_Rom_52B249) > 0x5
	.error "gText_Rom_52B249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B249) < 0x5
	.space 0x5 - (. - gText_Rom_52B249)
	.endif

	@ src/strings.c:929 gText_SilverCard
	.globl gText_Rom_52B24E
gText_Rom_52B24E: @ 0x0852B24E
	.string "シルバー$"
	.if (. - gText_Rom_52B24E) > 0x5
	.error "gText_Rom_52B24E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B24E) < 0x5
	.space 0x5 - (. - gText_Rom_52B24E)
	.endif

