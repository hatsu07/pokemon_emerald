@------------------------------------------------------------------------------
@ Pokemon ability descriptions
@ ROM: 0x082EC047 - 0x082EC5FF
@------------------------------------------------------------------------------

@ src/data/abilities.h:15 abilities_line_15
	.globl gText_Rom_2EC047
gText_Rom_2EC047: @ 0x082EC047
	.string "ポケモンが よりつき にくくなる$"
	.if (. - gText_Rom_2EC047) > 0x11
	.error "gText_Rom_2EC047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC047) < 0x11
	.space 0x11 - (. - gText_Rom_2EC047)
	.endif
	.incbin "baserom.gba", 0x2ec058, 0x2

	@ src/data/abilities.h:22 abilities_line_22
	.globl gText_Rom_2EC05A
gText_Rom_2EC05A: @ 0x082EC05A
	.string "せんとうに でると あめを ふらす$"
	.if (. - gText_Rom_2EC05A) > 0x12
	.error "gText_Rom_2EC05A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC05A) < 0x12
	.space 0x12 - (. - gText_Rom_2EC05A)
	.endif
	.incbin "baserom.gba", 0x2ec06c, 0x1

	@ src/data/abilities.h:29 abilities_line_29
	.globl gText_Rom_2EC06D
gText_Rom_2EC06D: @ 0x082EC06D
	.string "ちょっとずつ すばやく なっていく$"
	.if (. - gText_Rom_2EC06D) > 0x12
	.error "gText_Rom_2EC06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC06D) < 0x12
	.space 0x12 - (. - gText_Rom_2EC06D)
	.endif
	.incbin "baserom.gba", 0x2ec07f, 0x1

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gText_Rom_2EC080
gText_Rom_2EC080: @ 0x082EC080
	.string "わざを きゅうしょに うけない$"
	.if (. - gText_Rom_2EC080) > 0x10
	.error "gText_Rom_2EC080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC080) < 0x10
	.space 0x10 - (. - gText_Rom_2EC080)
	.endif
	.incbin "baserom.gba", 0x2ec090, 0x16

	@ src/data/abilities.h:52 abilities_line_52
	.globl gText_Rom_2EC0A6
gText_Rom_2EC0A6: @ 0x082EC0A6
	.string "だれも じばくが できなくなる$"
	.if (. - gText_Rom_2EC0A6) > 0x10
	.error "gText_Rom_2EC0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0A6) < 0x10
	.space 0x10 - (. - gText_Rom_2EC0A6)
	.endif
	.incbin "baserom.gba", 0x2ec0b6, 0x3

	@ src/data/abilities.h:60 abilities_line_60
	.globl gText_Rom_2EC0B9
gText_Rom_2EC0B9: @ 0x082EC0B9
	.string "まひ じょうたいに ならない$"
	.if (. - gText_Rom_2EC0B9) > 0xf
	.error "gText_Rom_2EC0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0B9) < 0xf
	.space 0xf - (. - gText_Rom_2EC0B9)
	.endif
	.incbin "baserom.gba", 0x2ec0c8, 0x4

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
