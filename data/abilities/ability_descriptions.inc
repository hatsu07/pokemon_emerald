@------------------------------------------------------------------------------
@ Pokemon ability descriptions
@ ROM table: 0x082EC034 - 0x082EC5FD (78 entries x 0x13 bytes)
@ Alignment padding: 0x082EC5FE - 0x082EC5FF
@------------------------------------------------------------------------------

	.globl gAbilityDescriptions
gAbilityDescriptions: @ 0x082EC034

	@ ABILITY_NONE
.Lbatch81_text_start_gText_Rom_2EC034: @ 0x082EC034
	.string "とくせいなし"
	.byte EOS
	.if (. - .Lbatch81_text_start_gText_Rom_2EC034) > 0x13
	.error ".Lbatch81_text_start_gText_Rom_2EC034 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2EC034) < 0x13
	.space 0x13 - (. - .Lbatch81_text_start_gText_Rom_2EC034), 0
	.endif

@ src/data/abilities.h:15 abilities_line_15
	.globl gAbilityDescription_STENCH
gAbilityDescription_STENCH: @ 0x082EC047
	.string "ポケモンが よりつき にくくなる"
	.byte EOS
	.if (. - gAbilityDescription_STENCH) > 0x11
	.error "gAbilityDescription_STENCH may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_STENCH) < 0x11
	.space 0x11 - (. - gAbilityDescription_STENCH)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:22 abilities_line_22
	.globl gAbilityDescription_DRIZZLE
gAbilityDescription_DRIZZLE: @ 0x082EC05A
	.string "せんとうに でると あめを ふらす"
	.byte EOS
	.if (. - gAbilityDescription_DRIZZLE) > 0x12
	.error "gAbilityDescription_DRIZZLE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_DRIZZLE) < 0x12
	.space 0x12 - (. - gAbilityDescription_DRIZZLE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:29 abilities_line_29
	.globl gAbilityDescription_SPEED_BOOST
gAbilityDescription_SPEED_BOOST: @ 0x082EC06D
	.string "ちょっとずつ すばやく なっていく"
	.byte EOS
	.if (. - gAbilityDescription_SPEED_BOOST) > 0x12
	.error "gAbilityDescription_SPEED_BOOST may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SPEED_BOOST) < 0x12
	.space 0x12 - (. - gAbilityDescription_SPEED_BOOST)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gAbilityDescription_BATTLE_ARMOR
gAbilityDescription_BATTLE_ARMOR: @ 0x082EC080
	.string "わざを きゅうしょに うけない"
	.byte EOS
	.if (. - gAbilityDescription_BATTLE_ARMOR) > 0x10
	.error "gAbilityDescription_BATTLE_ARMOR may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_BATTLE_ARMOR) < 0x10
	.space 0x10 - (. - gAbilityDescription_BATTLE_ARMOR)
	.endif
	.space 0x3, 0 @ complete the ABILITY_BATTLE_ARMOR slot

	@ ABILITY_STURDY
	.globl gAbilityDescription_STURDY
gAbilityDescription_STURDY: @ 0x082EC093
	.string "いちげきひっさつが きかない"
	.byte EOS
	.if (. - gAbilityDescription_STURDY) > 0x13
	.error "gAbilityDescription_STURDY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_STURDY) < 0x13
	.space 0x13 - (. - gAbilityDescription_STURDY), 0
	.endif

	@ src/data/abilities.h:52 abilities_line_52
	.globl gAbilityDescription_DAMP
gAbilityDescription_DAMP: @ 0x082EC0A6
	.string "だれも じばくが できなくなる"
	.byte EOS
	.if (. - gAbilityDescription_DAMP) > 0x10
	.error "gAbilityDescription_DAMP may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_DAMP) < 0x10
	.space 0x10 - (. - gAbilityDescription_DAMP)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:60 abilities_line_60
	.globl gAbilityDescription_LIMBER
gAbilityDescription_LIMBER: @ 0x082EC0B9
	.string "まひ じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_LIMBER) > 0xf
	.error "gAbilityDescription_LIMBER may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_LIMBER) < 0xf
	.space 0xf - (. - gAbilityDescription_LIMBER)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:68 abilities_line_68
	.globl gAbilityDescription_SAND_VEIL
gAbilityDescription_SAND_VEIL: @ 0x082EC0CC
	.string "すなあらしで かいひりつが あがる"
	.byte EOS
	.if (. - gAbilityDescription_SAND_VEIL) > 0x12
	.error "gAbilityDescription_SAND_VEIL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SAND_VEIL) < 0x12
	.space 0x12 - (. - gAbilityDescription_SAND_VEIL)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:76 abilities_line_76
	.globl gAbilityDescription_STATIC
gAbilityDescription_STATIC: @ 0x082EC0DF
	.string "さわった あいてを まひさせる"
	.byte EOS
	.if (. - gAbilityDescription_STATIC) > 0x10
	.error "gAbilityDescription_STATIC may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_STATIC) < 0x10
	.space 0x10 - (. - gAbilityDescription_STATIC)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:83 abilities_line_83
	.globl gAbilityDescription_VOLT_ABSORB
gAbilityDescription_VOLT_ABSORB: @ 0x082EC0F2
	.string "でんきを うけると かいふくする"
	.byte EOS
	.if (. - gAbilityDescription_VOLT_ABSORB) > 0x11
	.error "gAbilityDescription_VOLT_ABSORB may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_VOLT_ABSORB) < 0x11
	.space 0x11 - (. - gAbilityDescription_VOLT_ABSORB)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:91 abilities_line_91
	.globl gAbilityDescription_WATER_ABSORB
gAbilityDescription_WATER_ABSORB: @ 0x082EC105
	.string "みずを うけると かいふくする"
	.byte EOS
	.if (. - gAbilityDescription_WATER_ABSORB) > 0x10
	.error "gAbilityDescription_WATER_ABSORB may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_WATER_ABSORB) < 0x10
	.space 0x10 - (. - gAbilityDescription_WATER_ABSORB)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:99 abilities_line_99
	.globl gAbilityDescription_OBLIVIOUS
gAbilityDescription_OBLIVIOUS: @ 0x082EC118
	.string "メロメロ じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_OBLIVIOUS) > 0x11
	.error "gAbilityDescription_OBLIVIOUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_OBLIVIOUS) < 0x11
	.space 0x11 - (. - gAbilityDescription_OBLIVIOUS)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:107 abilities_line_107 (+1 aliases)
	.globl gAbilityDescription_CLOUD_NINE
gAbilityDescription_CLOUD_NINE: @ 0x082EC12B
	.string "てんきの えいきょうが なくなる"
	.byte EOS
	.if (. - gAbilityDescription_CLOUD_NINE) > 0x11
	.error "gAbilityDescription_CLOUD_NINE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_CLOUD_NINE) < 0x11
	.space 0x11 - (. - gAbilityDescription_CLOUD_NINE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:114 abilities_line_114
	.globl gAbilityDescription_COMPOUND_EYES
gAbilityDescription_COMPOUND_EYES: @ 0x082EC13E
	.string "わざの めいちゅうりつが あがる"
	.byte EOS
	.if (. - gAbilityDescription_COMPOUND_EYES) > 0x11
	.error "gAbilityDescription_COMPOUND_EYES may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_COMPOUND_EYES) < 0x11
	.space 0x11 - (. - gAbilityDescription_COMPOUND_EYES)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:121 abilities_line_121
	.globl gAbilityDescription_INSOMNIA
gAbilityDescription_INSOMNIA: @ 0x082EC151
	.string "ねむり じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_INSOMNIA) > 0x10
	.error "gAbilityDescription_INSOMNIA may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_INSOMNIA) < 0x10
	.space 0x10 - (. - gAbilityDescription_INSOMNIA)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:129 abilities_line_129
	.globl gAbilityDescription_COLOR_CHANGE
gAbilityDescription_COLOR_CHANGE: @ 0x082EC164
	.string "うけた わざの タイプに へんかする"
	.byte EOS
	.if (. - gAbilityDescription_COLOR_CHANGE) > 0x13
	.error "gAbilityDescription_COLOR_CHANGE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_COLOR_CHANGE) < 0x13
	.space 0x13 - (. - gAbilityDescription_COLOR_CHANGE)
	.endif

	@ src/data/abilities.h:136 abilities_line_136
	.globl gAbilityDescription_IMMUNITY
gAbilityDescription_IMMUNITY: @ 0x082EC177
	.string "どく じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_IMMUNITY) > 0xf
	.error "gAbilityDescription_IMMUNITY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_IMMUNITY) < 0xf
	.space 0xf - (. - gAbilityDescription_IMMUNITY)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:144 abilities_line_144
	.globl gAbilityDescription_FLASH_FIRE
gAbilityDescription_FLASH_FIRE: @ 0x082EC18A
	.string "ほのおを うけると つよくなる"
	.byte EOS
	.if (. - gAbilityDescription_FLASH_FIRE) > 0x10
	.error "gAbilityDescription_FLASH_FIRE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_FLASH_FIRE) < 0x10
	.space 0x10 - (. - gAbilityDescription_FLASH_FIRE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:152 abilities_line_152
	.globl gAbilityDescription_SHIELD_DUST
gAbilityDescription_SHIELD_DUST: @ 0x082EC19D
	.string "わざの ついかこうかを うけない"
	.byte EOS
	.if (. - gAbilityDescription_SHIELD_DUST) > 0x11
	.error "gAbilityDescription_SHIELD_DUST may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SHIELD_DUST) < 0x11
	.space 0x11 - (. - gAbilityDescription_SHIELD_DUST)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:160 abilities_line_160
	.globl gAbilityDescription_OWN_TEMPO
gAbilityDescription_OWN_TEMPO: @ 0x082EC1B0
	.string "こんらん じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_OWN_TEMPO) > 0x11
	.error "gAbilityDescription_OWN_TEMPO may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_OWN_TEMPO) < 0x11
	.space 0x11 - (. - gAbilityDescription_OWN_TEMPO)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:168 abilities_line_168
	.globl gAbilityDescription_SUCTION_CUPS
gAbilityDescription_SUCTION_CUPS: @ 0x082EC1C3
	.string "きゅうばんで じめんに はりつく"
	.byte EOS
	.if (. - gAbilityDescription_SUCTION_CUPS) > 0x11
	.error "gAbilityDescription_SUCTION_CUPS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SUCTION_CUPS) < 0x11
	.space 0x11 - (. - gAbilityDescription_SUCTION_CUPS)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:176 abilities_line_176
	.globl gAbilityDescription_INTIMIDATE
gAbilityDescription_INTIMIDATE: @ 0x082EC1D6
	.string "あいての こうげきを さげる"
	.byte EOS
	.if (. - gAbilityDescription_INTIMIDATE) > 0xf
	.error "gAbilityDescription_INTIMIDATE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_INTIMIDATE) < 0xf
	.space 0xf - (. - gAbilityDescription_INTIMIDATE)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:183 abilities_line_183 (+1 aliases)
	.globl gAbilityDescription_SHADOW_TAG
gAbilityDescription_SHADOW_TAG: @ 0x082EC1E9
	.string "あいてを にげられなくする"
	.byte EOS
	.if (. - gAbilityDescription_SHADOW_TAG) > 0xe
	.error "gAbilityDescription_SHADOW_TAG may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SHADOW_TAG) < 0xe
	.space 0xe - (. - gAbilityDescription_SHADOW_TAG)
	.endif
	.space 0x5, 0 @ fixed-slot padding

	@ src/data/abilities.h:190 abilities_line_190 (+1 aliases)
	.globl gAbilityDescription_ROUGH_SKIN
gAbilityDescription_ROUGH_SKIN: @ 0x082EC1FC
	.string "さわった あいてを キズつける"
	.byte EOS
	.if (. - gAbilityDescription_ROUGH_SKIN) > 0x10
	.error "gAbilityDescription_ROUGH_SKIN may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_ROUGH_SKIN) < 0x10
	.space 0x10 - (. - gAbilityDescription_ROUGH_SKIN)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:197 abilities_line_197
	.globl gAbilityDescription_WONDER_GUARD
gAbilityDescription_WONDER_GUARD: @ 0x082EC20F
	.string "こうか ばつぐん しか あたらない"
	.byte EOS
	.if (. - gAbilityDescription_WONDER_GUARD) > 0x12
	.error "gAbilityDescription_WONDER_GUARD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_WONDER_GUARD) < 0x12
	.space 0x12 - (. - gAbilityDescription_WONDER_GUARD)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:207 abilities_line_207
	.globl gAbilityDescription_LEVITATE
gAbilityDescription_LEVITATE: @ 0x082EC222
	.string "じめんタイプの わざを うけない"
	.byte EOS
	.if (. - gAbilityDescription_LEVITATE) > 0x11
	.error "gAbilityDescription_LEVITATE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_LEVITATE) < 0x11
	.space 0x11 - (. - gAbilityDescription_LEVITATE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:215 abilities_line_215
	.globl gAbilityDescription_EFFECT_SPORE
gAbilityDescription_EFFECT_SPORE: @ 0x082EC235
	.string "さわった あいてに ほうしがつく"
	.byte EOS
	.if (. - gAbilityDescription_EFFECT_SPORE) > 0x11
	.error "gAbilityDescription_EFFECT_SPORE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_EFFECT_SPORE) < 0x11
	.space 0x11 - (. - gAbilityDescription_EFFECT_SPORE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:222 abilities_line_222
	.globl gAbilityDescription_SYNCHRONIZE
gAbilityDescription_SYNCHRONIZE: @ 0x082EC248
	.string "どく まひ やけどを あいてにうつす"
	.byte EOS
	.if (. - gAbilityDescription_SYNCHRONIZE) > 0x13
	.error "gAbilityDescription_SYNCHRONIZE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SYNCHRONIZE) < 0x13
	.space 0x13 - (. - gAbilityDescription_SYNCHRONIZE)
	.endif

	@ src/data/abilities.h:229 abilities_line_229 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_CLEAR_BODY
gAbilityDescription_CLEAR_BODY: @ 0x082EC25B
	.string "あいてに のうりょくを さげられない"
	.byte EOS
	.if (. - gAbilityDescription_CLEAR_BODY) != 0x13
	.error "gAbilityDescription_CLEAR_BODY must retain its original byte length"
	.endif
	.globl gText_Rom_2EC269
	.set gText_Rom_2EC269, gAbilityDescription_CLEAR_BODY + 0xe

	@ src/data/abilities.h:237 abilities_line_237
	.globl gAbilityDescription_NATURAL_CURE
gAbilityDescription_NATURAL_CURE: @ 0x082EC26E
	.string "ひっこむと いじょうが なおる"
	.byte EOS
	.if (. - gAbilityDescription_NATURAL_CURE) > 0x10
	.error "gAbilityDescription_NATURAL_CURE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_NATURAL_CURE) < 0x10
	.space 0x10 - (. - gAbilityDescription_NATURAL_CURE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:244 abilities_line_244
	.globl gAbilityDescription_LIGHTNING_ROD
gAbilityDescription_LIGHTNING_ROD: @ 0x082EC281
	.string "でんきタイプの わざが じぶんにくる"
	.byte EOS
	.if (. - gAbilityDescription_LIGHTNING_ROD) > 0x13
	.error "gAbilityDescription_LIGHTNING_ROD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_LIGHTNING_ROD) < 0x13
	.space 0x13 - (. - gAbilityDescription_LIGHTNING_ROD)
	.endif

	@ src/data/abilities.h:252 abilities_line_252
	.globl gAbilityDescription_SERENE_GRACE
gAbilityDescription_SERENE_GRACE: @ 0x082EC294
	.string "わざの ついかこうかが でやすい"
	.byte EOS
	.if (. - gAbilityDescription_SERENE_GRACE) > 0x11
	.error "gAbilityDescription_SERENE_GRACE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SERENE_GRACE) < 0x11
	.space 0x11 - (. - gAbilityDescription_SERENE_GRACE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:259 abilities_line_259
	.globl gAbilityDescription_SWIFT_SWIM
gAbilityDescription_SWIFT_SWIM: @ 0x082EC2A7
	.string "あめのとき すばやさが はやくなる"
	.byte EOS
	.if (. - gAbilityDescription_SWIFT_SWIM) > 0x12
	.error "gAbilityDescription_SWIFT_SWIM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SWIFT_SWIM) < 0x12
	.space 0x12 - (. - gAbilityDescription_SWIFT_SWIM)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:266 abilities_line_266
	.globl gAbilityDescription_CHLOROPHYLL
gAbilityDescription_CHLOROPHYLL: @ 0x082EC2BA
	.string "はれのとき すばやさが はやくなる"
	.byte EOS
	.if (. - gAbilityDescription_CHLOROPHYLL) > 0x12
	.error "gAbilityDescription_CHLOROPHYLL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_CHLOROPHYLL) < 0x12
	.space 0x12 - (. - gAbilityDescription_CHLOROPHYLL)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:273 abilities_line_273
	.globl gAbilityDescription_ILLUMINATE
gAbilityDescription_ILLUMINATE: @ 0x082EC2CD
	.string "ポケモンに そうぐう しやすくなる"
	.byte EOS
	.if (. - gAbilityDescription_ILLUMINATE) > 0x12
	.error "gAbilityDescription_ILLUMINATE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_ILLUMINATE) < 0x12
	.space 0x12 - (. - gAbilityDescription_ILLUMINATE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:281 abilities_line_281
	.globl gAbilityDescription_TRACE
gAbilityDescription_TRACE: @ 0x082EC2E0
	.string "あいてと おなじ とくせいになる"
	.byte EOS
	.if (. - gAbilityDescription_TRACE) > 0x11
	.error "gAbilityDescription_TRACE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_TRACE) < 0x11
	.space 0x11 - (. - gAbilityDescription_TRACE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:290 abilities_line_290 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_HUGE_POWER
gAbilityDescription_HUGE_POWER: @ 0x082EC2F3
	.string "こうげきりょくが たかい"
	.byte EOS
	.if (. - gAbilityDescription_HUGE_POWER) != 0xd
	.error "gAbilityDescription_HUGE_POWER must retain its original byte length"
	.endif
	.globl gText_Rom_2EC2FC
	.set gText_Rom_2EC2FC, gAbilityDescription_HUGE_POWER + 0x9
	.space 0x6, 0 @ fixed-slot padding

	@ src/data/abilities.h:297 abilities_line_297
	.globl gAbilityDescription_POISON_POINT
gAbilityDescription_POISON_POINT: @ 0x082EC306
	.string "さわったあいてに どくをあたえる"
	.byte EOS
	.if (. - gAbilityDescription_POISON_POINT) > 0x11
	.error "gAbilityDescription_POISON_POINT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_POISON_POINT) < 0x11
	.space 0x11 - (. - gAbilityDescription_POISON_POINT)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:304 abilities_line_304
	.globl gAbilityDescription_INNER_FOCUS
gAbilityDescription_INNER_FOCUS: @ 0x082EC319
	.string "ひるまない"
	.byte EOS
	.if (. - gAbilityDescription_INNER_FOCUS) > 0x6
	.error "gAbilityDescription_INNER_FOCUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_INNER_FOCUS) < 0x6
	.space 0x6 - (. - gAbilityDescription_INNER_FOCUS)
	.endif
	.space 0xd, 0 @ fixed-slot padding

	@ src/data/abilities.h:312 abilities_line_312
	.globl gAbilityDescription_MAGMA_ARMOR
gAbilityDescription_MAGMA_ARMOR: @ 0x082EC32C
	.string "こおり じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_MAGMA_ARMOR) > 0x10
	.error "gAbilityDescription_MAGMA_ARMOR may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_MAGMA_ARMOR) < 0x10
	.space 0x10 - (. - gAbilityDescription_MAGMA_ARMOR)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:320 abilities_line_320
	.globl gAbilityDescription_WATER_VEIL
gAbilityDescription_WATER_VEIL: @ 0x082EC33F
	.string "やけど じょうたいに ならない"
	.byte EOS
	.if (. - gAbilityDescription_WATER_VEIL) > 0x10
	.error "gAbilityDescription_WATER_VEIL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_WATER_VEIL) < 0x10
	.space 0x10 - (. - gAbilityDescription_WATER_VEIL)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:328 abilities_line_328
	.globl gAbilityDescription_MAGNET_PULL
gAbilityDescription_MAGNET_PULL: @ 0x082EC352
	.string "はがねタイプが にげられなくなる"
	.byte EOS
	.if (. - gAbilityDescription_MAGNET_PULL) > 0x11
	.error "gAbilityDescription_MAGNET_PULL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_MAGNET_PULL) < 0x11
	.space 0x11 - (. - gAbilityDescription_MAGNET_PULL)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:335 abilities_line_335
	.globl gAbilityDescription_SOUNDPROOF
gAbilityDescription_SOUNDPROOF: @ 0x082EC365
	.string "おとの わざを うけない"
	.byte EOS
	.if (. - gAbilityDescription_SOUNDPROOF) > 0xd
	.error "gAbilityDescription_SOUNDPROOF may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SOUNDPROOF) < 0xd
	.space 0xd - (. - gAbilityDescription_SOUNDPROOF)
	.endif
	.space 0x6, 0 @ fixed-slot padding

	@ src/data/abilities.h:343 abilities_line_343
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_RAIN_DISH
gAbilityDescription_RAIN_DISH: @ 0x082EC378
	.string "あめのとき すこしずつ かいふく"
	.byte EOS
	.if (. - gAbilityDescription_RAIN_DISH) != 0x11
	.error "gAbilityDescription_RAIN_DISH must retain its original byte length"
	.endif
	.globl gText_Rom_2EC384
	.set gText_Rom_2EC384, gAbilityDescription_RAIN_DISH + 0xc
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:350 abilities_line_350
	.globl gAbilityDescription_SAND_STREAM
gAbilityDescription_SAND_STREAM: @ 0x082EC38B
	.string "せんとうで すなあらしを おこす"
	.byte EOS
	.if (. - gAbilityDescription_SAND_STREAM) > 0x11
	.error "gAbilityDescription_SAND_STREAM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SAND_STREAM) < 0x11
	.space 0x11 - (. - gAbilityDescription_SAND_STREAM)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:357 abilities_line_357
	.globl gAbilityDescription_PRESSURE
gAbilityDescription_PRESSURE: @ 0x082EC39E
	.string "あいての PPが へりやすくなる"
	.byte EOS
	.if (. - gAbilityDescription_PRESSURE) > 0x11
	.error "gAbilityDescription_PRESSURE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_PRESSURE) < 0x11
	.space 0x11 - (. - gAbilityDescription_PRESSURE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:364 abilities_line_364
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_THICK_FAT
gAbilityDescription_THICK_FAT: @ 0x082EC3B1
	.string "ほのお こおりに つよい"
	.byte EOS
	.if (. - gAbilityDescription_THICK_FAT) != 0xd
	.error "gAbilityDescription_THICK_FAT must retain its original byte length"
	.endif
	.globl gText_Rom_2EC3BA
	.set gText_Rom_2EC3BA, gAbilityDescription_THICK_FAT + 0x9
	.space 0x6, 0 @ fixed-slot padding

	@ src/data/abilities.h:372 abilities_line_372
	.globl gAbilityDescription_EARLY_BIRD
gAbilityDescription_EARLY_BIRD: @ 0x082EC3C4
	.string "おきるのが はやくなる"
	.byte EOS
	.if (. - gAbilityDescription_EARLY_BIRD) > 0xc
	.error "gAbilityDescription_EARLY_BIRD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_EARLY_BIRD) < 0xc
	.space 0xc - (. - gAbilityDescription_EARLY_BIRD)
	.endif
	.space 0x7, 0 @ fixed-slot padding

	@ src/data/abilities.h:379 abilities_line_379
	.globl gAbilityDescription_FLAME_BODY
gAbilityDescription_FLAME_BODY: @ 0x082EC3D7
	.string "さわった あいてを やけど させる"
	.byte EOS
	.if (. - gAbilityDescription_FLAME_BODY) > 0x12
	.error "gAbilityDescription_FLAME_BODY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_FLAME_BODY) < 0x12
	.space 0x12 - (. - gAbilityDescription_FLAME_BODY)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:386 abilities_line_386
	.globl gAbilityDescription_RUN_AWAY
gAbilityDescription_RUN_AWAY: @ 0x082EC3EA
	.string "せんとうから にげやすい"
	.byte EOS
	.if (. - gAbilityDescription_RUN_AWAY) > 0xd
	.error "gAbilityDescription_RUN_AWAY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_RUN_AWAY) < 0xd
	.space 0xd - (. - gAbilityDescription_RUN_AWAY)
	.endif
	.space 0x6, 0 @ fixed-slot padding

	@ src/data/abilities.h:393 abilities_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_KEEN_EYE
gAbilityDescription_KEEN_EYE: @ 0x082EC3FD
	.string "あいてに めいちゅうを さげられない"
	.byte EOS
	.if (. - gAbilityDescription_KEEN_EYE) != 0x13
	.error "gAbilityDescription_KEEN_EYE must retain its original byte length"
	.endif
	.globl gText_Rom_2EC40B
	.set gText_Rom_2EC40B, gAbilityDescription_KEEN_EYE + 0xe

	@ src/data/abilities.h:401 abilities_line_401
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_HYPER_CUTTER
gAbilityDescription_HYPER_CUTTER: @ 0x082EC410
	.string "あいてに こうげきを さげられない"
	.byte EOS
	.if (. - gAbilityDescription_HYPER_CUTTER) != 0x12
	.error "gAbilityDescription_HYPER_CUTTER must retain its original byte length"
	.endif
	.globl gText_Rom_2EC41D
	.set gText_Rom_2EC41D, gAbilityDescription_HYPER_CUTTER + 0xd
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:409 abilities_line_409
	.globl gAbilityDescription_PICKUP
gAbilityDescription_PICKUP: @ 0x082EC423
	.string "どうぐを ひろってくる ことがある"
	.byte EOS
	.if (. - gAbilityDescription_PICKUP) > 0x12
	.error "gAbilityDescription_PICKUP may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_PICKUP) < 0x12
	.space 0x12 - (. - gAbilityDescription_PICKUP)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:416 abilities_line_416
	.globl gAbilityDescription_TRUANT
gAbilityDescription_TRUANT: @ 0x082EC436
	.string "こうげきが れんぞくで だせない"
	.byte EOS
	.if (. - gAbilityDescription_TRUANT) > 0x11
	.error "gAbilityDescription_TRUANT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_TRUANT) < 0x11
	.space 0x11 - (. - gAbilityDescription_TRUANT)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:424 abilities_line_424
	.globl gAbilityDescription_HUSTLE
gAbilityDescription_HUSTLE: @ 0x082EC449
	.string "こうげきは たかいが はずれやすい"
	.byte EOS
	.if (. - gAbilityDescription_HUSTLE) > 0x12
	.error "gAbilityDescription_HUSTLE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_HUSTLE) < 0x12
	.space 0x12 - (. - gAbilityDescription_HUSTLE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:431 abilities_line_431
	.globl gAbilityDescription_CUTE_CHARM
gAbilityDescription_CUTE_CHARM: @ 0x082EC45C
	.string "さわった あいてを メロメロにする"
	.byte EOS
	.if (. - gAbilityDescription_CUTE_CHARM) > 0x12
	.error "gAbilityDescription_CUTE_CHARM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_CUTE_CHARM) < 0x12
	.space 0x12 - (. - gAbilityDescription_CUTE_CHARM)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:438 abilities_line_438
	.globl gAbilityDescription_PLUS
gAbilityDescription_PLUS: @ 0x082EC46F
	.string "マイナスが いると つよくなる"
	.byte EOS
	.if (. - gAbilityDescription_PLUS) > 0x10
	.error "gAbilityDescription_PLUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_PLUS) < 0x10
	.space 0x10 - (. - gAbilityDescription_PLUS)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:445 abilities_line_445
	.globl gAbilityDescription_MINUS
gAbilityDescription_MINUS: @ 0x082EC482
	.string "プラスが いると つよくなる"
	.byte EOS
	.if (. - gAbilityDescription_MINUS) > 0xf
	.error "gAbilityDescription_MINUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_MINUS) < 0xf
	.space 0xf - (. - gAbilityDescription_MINUS)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:452 abilities_line_452
	.globl gAbilityDescription_FORECAST
gAbilityDescription_FORECAST: @ 0x082EC495
	.string "てんきで ポワルンが へんかする"
	.byte EOS
	.if (. - gAbilityDescription_FORECAST) > 0x11
	.error "gAbilityDescription_FORECAST may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_FORECAST) < 0x11
	.space 0x11 - (. - gAbilityDescription_FORECAST)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:462 abilities_line_462
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_STICKY_HOLD
gAbilityDescription_STICKY_HOLD: @ 0x082EC4A8
	.string "どうぐを とられない"
	.byte EOS
	.if (. - gAbilityDescription_STICKY_HOLD) != 0xb
	.error "gAbilityDescription_STICKY_HOLD must retain its original byte length"
	.endif
	.globl gText_Rom_2EC4AE
	.set gText_Rom_2EC4AE, gAbilityDescription_STICKY_HOLD + 0x6
	.space 0x8, 0 @ fixed-slot padding

	@ src/data/abilities.h:470 abilities_line_470
	.globl gAbilityDescription_SHED_SKIN
gAbilityDescription_SHED_SKIN: @ 0x082EC4BB
	.string "だっぴして からだを なおす"
	.byte EOS
	.if (. - gAbilityDescription_SHED_SKIN) > 0xf
	.error "gAbilityDescription_SHED_SKIN may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SHED_SKIN) < 0xf
	.space 0xf - (. - gAbilityDescription_SHED_SKIN)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:477 abilities_line_477
	.globl gAbilityDescription_GUTS
gAbilityDescription_GUTS: @ 0x082EC4CE
	.string "いじょうのとき こうげきが あがる"
	.byte EOS
	.if (. - gAbilityDescription_GUTS) > 0x12
	.error "gAbilityDescription_GUTS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_GUTS) < 0x12
	.space 0x12 - (. - gAbilityDescription_GUTS)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:484 abilities_line_484
	.globl gAbilityDescription_MARVEL_SCALE
gAbilityDescription_MARVEL_SCALE: @ 0x082EC4E1
	.string "いじょうのとき ぼうぎょが あがる"
	.byte EOS
	.if (. - gAbilityDescription_MARVEL_SCALE) > 0x12
	.error "gAbilityDescription_MARVEL_SCALE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_MARVEL_SCALE) < 0x12
	.space 0x12 - (. - gAbilityDescription_MARVEL_SCALE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:492 abilities_line_492
	.globl gAbilityDescription_LIQUID_OOZE
gAbilityDescription_LIQUID_OOZE: @ 0x082EC4F4
	.string "すいとると たいりょくが へる"
	.byte EOS
	.if (. - gAbilityDescription_LIQUID_OOZE) > 0x10
	.error "gAbilityDescription_LIQUID_OOZE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_LIQUID_OOZE) < 0x10
	.space 0x10 - (. - gAbilityDescription_LIQUID_OOZE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:499 abilities_line_499
	.globl gAbilityDescription_OVERGROW
gAbilityDescription_OVERGROW: @ 0x082EC507
	.string "ピンチに くさの いりょくが あがる"
	.byte EOS
	.if (. - gAbilityDescription_OVERGROW) > 0x13
	.error "gAbilityDescription_OVERGROW may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_OVERGROW) < 0x13
	.space 0x13 - (. - gAbilityDescription_OVERGROW)
	.endif

	@ src/data/abilities.h:506 abilities_line_506
	.globl gAbilityDescription_BLAZE
gAbilityDescription_BLAZE: @ 0x082EC51A
	.string "ピンチに ほのおが つよくなる"
	.byte EOS
	.if (. - gAbilityDescription_BLAZE) > 0x10
	.error "gAbilityDescription_BLAZE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_BLAZE) < 0x10
	.space 0x10 - (. - gAbilityDescription_BLAZE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:513 abilities_line_513
	.globl gAbilityDescription_TORRENT
gAbilityDescription_TORRENT: @ 0x082EC52D
	.string "ピンチに みずの いりょくが あがる"
	.byte EOS
	.if (. - gAbilityDescription_TORRENT) > 0x13
	.error "gAbilityDescription_TORRENT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_TORRENT) < 0x13
	.space 0x13 - (. - gAbilityDescription_TORRENT)
	.endif

	@ src/data/abilities.h:520 abilities_line_520
	.globl gAbilityDescription_SWARM
gAbilityDescription_SWARM: @ 0x082EC540
	.string "ピンチに むしの いりょくが あがる"
	.byte EOS
	.if (. - gAbilityDescription_SWARM) > 0x13
	.error "gAbilityDescription_SWARM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SWARM) < 0x13
	.space 0x13 - (. - gAbilityDescription_SWARM)
	.endif

	@ src/data/abilities.h:527 abilities_line_527
	.globl gAbilityDescription_ROCK_HEAD
gAbilityDescription_ROCK_HEAD: @ 0x082EC553
	.string "ぶつかっても はんどうを うけない"
	.byte EOS
	.if (. - gAbilityDescription_ROCK_HEAD) > 0x12
	.error "gAbilityDescription_ROCK_HEAD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_ROCK_HEAD) < 0x12
	.space 0x12 - (. - gAbilityDescription_ROCK_HEAD)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:534 abilities_line_534 (+1 aliases)
	.globl gAbilityDescription_DROUGHT
gAbilityDescription_DROUGHT: @ 0x082EC566
	.string "せんとうで ひざしを つよくする"
	.byte EOS
	.if (. - gAbilityDescription_DROUGHT) > 0x11
	.error "gAbilityDescription_DROUGHT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_DROUGHT) < 0x11
	.space 0x11 - (. - gAbilityDescription_DROUGHT)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:183 abilities_line_183 (+1 aliases)
	.globl gAbilityDescription_ARENA_TRAP
gAbilityDescription_ARENA_TRAP: @ 0x082EC579
	.string "あいてを にげられなくする"
	.byte EOS
	.if (. - gAbilityDescription_ARENA_TRAP) > 0xe
	.error "gAbilityDescription_ARENA_TRAP may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_ARENA_TRAP) < 0xe
	.space 0xe - (. - gAbilityDescription_ARENA_TRAP)
	.endif
	.space 0x5, 0 @ fixed-slot padding

	@ src/data/abilities.h:548 abilities_line_548
	.globl gAbilityDescription_VITAL_SPIRIT
gAbilityDescription_VITAL_SPIRIT: @ 0x082EC58C
	.string "ねむらない"
	.byte EOS
	.if (. - gAbilityDescription_VITAL_SPIRIT) > 0x6
	.error "gAbilityDescription_VITAL_SPIRIT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_VITAL_SPIRIT) < 0x6
	.space 0x6 - (. - gAbilityDescription_VITAL_SPIRIT)
	.endif
	.space 0xd, 0 @ fixed-slot padding

	@ src/data/abilities.h:229 abilities_line_229 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_WHITE_SMOKE
gAbilityDescription_WHITE_SMOKE: @ 0x082EC59F
	.string "あいてに のうりょくを さげられない"
	.byte EOS
	.if (. - gAbilityDescription_WHITE_SMOKE) != 0x13
	.error "gAbilityDescription_WHITE_SMOKE must retain its original byte length"
	.endif
	.globl gText_Rom_2EC5AD
	.set gText_Rom_2EC5AD, gAbilityDescription_WHITE_SMOKE + 0xe

	@ src/data/abilities.h:290 abilities_line_290 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityDescription_PURE_POWER
gAbilityDescription_PURE_POWER: @ 0x082EC5B2
	.string "こうげきりょくが たかい"
	.byte EOS
	.if (. - gAbilityDescription_PURE_POWER) != 0xd
	.error "gAbilityDescription_PURE_POWER must retain its original byte length"
	.endif
	.globl gText_Rom_2EC5BB
	.set gText_Rom_2EC5BB, gAbilityDescription_PURE_POWER + 0x9
	.space 0x6, 0 @ fixed-slot padding

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gAbilityDescription_SHELL_ARMOR
gAbilityDescription_SHELL_ARMOR: @ 0x082EC5C5
	.string "わざを きゅうしょに うけない"
	.byte EOS
	.if (. - gAbilityDescription_SHELL_ARMOR) > 0x10
	.error "gAbilityDescription_SHELL_ARMOR may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_SHELL_ARMOR) < 0x10
	.space 0x10 - (. - gAbilityDescription_SHELL_ARMOR)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:335 abilities_line_335
	.globl gAbilityDescription_CACOPHONY
gAbilityDescription_CACOPHONY: @ 0x082EC5D8
	.string "おとの わざを うけない"
	.byte EOS
	.if (. - gAbilityDescription_CACOPHONY) > 0xd
	.error "gAbilityDescription_CACOPHONY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_CACOPHONY) < 0xd
	.space 0xd - (. - gAbilityDescription_CACOPHONY)
	.endif
	.space 0x6, 0 @ fixed-slot padding

	@ src/data/abilities.h:107 abilities_line_107 (+1 aliases)
	.globl gAbilityDescription_AIR_LOCK
gAbilityDescription_AIR_LOCK: @ 0x082EC5EB
	.string "てんきの えいきょうが なくなる"
	.byte EOS
	.if (. - gAbilityDescription_AIR_LOCK) > 0x11
	.error "gAbilityDescription_AIR_LOCK may not grow beyond its original slot"
	.endif
	.if (. - gAbilityDescription_AIR_LOCK) < 0x11
	.space 0x11 - (. - gAbilityDescription_AIR_LOCK)
	.endif
	.space 0x2, 0 @ complete the ABILITY_AIR_LOCK slot

	.balign 4, 0
