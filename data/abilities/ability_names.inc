@------------------------------------------------------------------------------
@ Pokemon ability names
@ ROM: 0x082EBDC4 - 0x082EC033 (78 entries x 8 bytes)
@------------------------------------------------------------------------------

	.globl gAbilityNames
gAbilityNames: @ 0x082EBDC4

	@ src/battle_records.c:89 sText_DashesNoPlayer (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2EBDC4: @ 0x082EBDC4
	.string "-------"
	.byte EOS
	.if (. - .Lbatch81_text_start_gText_Rom_2EBDC4) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2EBDC4 must retain its original byte length"
	.endif

@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gAbilityName_STENCH
gAbilityName_STENCH: @ 0x082EBDCC
	.string "あくしゅう"
	.byte EOS
	.if (. - gAbilityName_STENCH) > 0x6
	.error "gAbilityName_STENCH may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_STENCH) < 0x6
	.space 0x6 - (. - gAbilityName_STENCH)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gAbilityName_DRIZZLE
gAbilityName_DRIZZLE: @ 0x082EBDD4
	.string "あめふらし"
	.byte EOS
	.if (. - gAbilityName_DRIZZLE) > 0x6
	.error "gAbilityName_DRIZZLE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_DRIZZLE) < 0x6
	.space 0x6 - (. - gAbilityName_DRIZZLE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gAbilityName_SPEED_BOOST
gAbilityName_SPEED_BOOST: @ 0x082EBDDC
	.string "かそく"
	.byte EOS
	.if (. - gAbilityName_SPEED_BOOST) > 0x4
	.error "gAbilityName_SPEED_BOOST may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SPEED_BOOST) < 0x4
	.space 0x4 - (. - gAbilityName_SPEED_BOOST)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gAbilityName_BATTLE_ARMOR
gAbilityName_BATTLE_ARMOR: @ 0x082EBDE4
	.string "カブトアーマー"
	.byte EOS
	.if (. - gAbilityName_BATTLE_ARMOR) > 0x8
	.error "gAbilityName_BATTLE_ARMOR may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_BATTLE_ARMOR) < 0x8
	.space 0x8 - (. - gAbilityName_BATTLE_ARMOR)
	.endif

	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gAbilityName_STURDY
gAbilityName_STURDY: @ 0x082EBDEC
	.string "がんじょう"
	.byte EOS
	.if (. - gAbilityName_STURDY) > 0x6
	.error "gAbilityName_STURDY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_STURDY) < 0x6
	.space 0x6 - (. - gAbilityName_STURDY)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gAbilityName_DAMP
gAbilityName_DAMP: @ 0x082EBDF4
	.string "しめりけ"
	.byte EOS
	.if (. - gAbilityName_DAMP) > 0x5
	.error "gAbilityName_DAMP may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_DAMP) < 0x5
	.space 0x5 - (. - gAbilityName_DAMP)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gAbilityName_LIMBER
gAbilityName_LIMBER: @ 0x082EBDFC
	.string "じゅうなん"
	.byte EOS
	.if (. - gAbilityName_LIMBER) > 0x6
	.error "gAbilityName_LIMBER may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_LIMBER) < 0x6
	.space 0x6 - (. - gAbilityName_LIMBER)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gAbilityName_SAND_VEIL
gAbilityName_SAND_VEIL: @ 0x082EBE04
	.string "すながくれ"
	.byte EOS
	.if (. - gAbilityName_SAND_VEIL) > 0x6
	.error "gAbilityName_SAND_VEIL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SAND_VEIL) < 0x6
	.space 0x6 - (. - gAbilityName_SAND_VEIL)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityName_STATIC
gAbilityName_STATIC: @ 0x082EBE0C
	.string "せいでんき"
	.byte EOS
	.if (. - gAbilityName_STATIC) != 0x6
	.error "gAbilityName_STATIC must retain its original byte length"
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gAbilityName_VOLT_ABSORB
gAbilityName_VOLT_ABSORB: @ 0x082EBE14
	.string "ちくでん"
	.byte EOS
	.if (. - gAbilityName_VOLT_ABSORB) > 0x5
	.error "gAbilityName_VOLT_ABSORB may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_VOLT_ABSORB) < 0x5
	.space 0x5 - (. - gAbilityName_VOLT_ABSORB)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gAbilityName_WATER_ABSORB
gAbilityName_WATER_ABSORB: @ 0x082EBE1C
	.string "ちょすい"
	.byte EOS
	.if (. - gAbilityName_WATER_ABSORB) > 0x5
	.error "gAbilityName_WATER_ABSORB may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_WATER_ABSORB) < 0x5
	.space 0x5 - (. - gAbilityName_WATER_ABSORB)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gAbilityName_OBLIVIOUS
gAbilityName_OBLIVIOUS: @ 0x082EBE24
	.string "どんかん"
	.byte EOS
	.if (. - gAbilityName_OBLIVIOUS) > 0x5
	.error "gAbilityName_OBLIVIOUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_OBLIVIOUS) < 0x5
	.space 0x5 - (. - gAbilityName_OBLIVIOUS)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gAbilityName_CLOUD_NINE
gAbilityName_CLOUD_NINE: @ 0x082EBE2C
	.string "ノーてんき"
	.byte EOS
	.if (. - gAbilityName_CLOUD_NINE) > 0x6
	.error "gAbilityName_CLOUD_NINE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_CLOUD_NINE) < 0x6
	.space 0x6 - (. - gAbilityName_CLOUD_NINE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gAbilityName_COMPOUND_EYES
gAbilityName_COMPOUND_EYES: @ 0x082EBE34
	.string "ふくがん"
	.byte EOS
	.if (. - gAbilityName_COMPOUND_EYES) > 0x5
	.error "gAbilityName_COMPOUND_EYES may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_COMPOUND_EYES) < 0x5
	.space 0x5 - (. - gAbilityName_COMPOUND_EYES)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gAbilityName_INSOMNIA
gAbilityName_INSOMNIA: @ 0x082EBE3C
	.string "ふみん"
	.byte EOS
	.if (. - gAbilityName_INSOMNIA) > 0x4
	.error "gAbilityName_INSOMNIA may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_INSOMNIA) < 0x4
	.space 0x4 - (. - gAbilityName_INSOMNIA)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gAbilityName_COLOR_CHANGE
gAbilityName_COLOR_CHANGE: @ 0x082EBE44
	.string "へんしょく"
	.byte EOS
	.if (. - gAbilityName_COLOR_CHANGE) > 0x6
	.error "gAbilityName_COLOR_CHANGE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_COLOR_CHANGE) < 0x6
	.space 0x6 - (. - gAbilityName_COLOR_CHANGE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gAbilityName_IMMUNITY
gAbilityName_IMMUNITY: @ 0x082EBE4C
	.string "めんえき"
	.byte EOS
	.if (. - gAbilityName_IMMUNITY) > 0x5
	.error "gAbilityName_IMMUNITY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_IMMUNITY) < 0x5
	.space 0x5 - (. - gAbilityName_IMMUNITY)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gAbilityName_FLASH_FIRE
gAbilityName_FLASH_FIRE: @ 0x082EBE54
	.string "もらいび"
	.byte EOS
	.if (. - gAbilityName_FLASH_FIRE) > 0x5
	.error "gAbilityName_FLASH_FIRE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_FLASH_FIRE) < 0x5
	.space 0x5 - (. - gAbilityName_FLASH_FIRE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:151 abilities_line_151 (+1 aliases)
	.globl gAbilityName_SHIELD_DUST
gAbilityName_SHIELD_DUST: @ 0x082EBE5C
	.string "りんぷん"
	.byte EOS
	.if (. - gAbilityName_SHIELD_DUST) > 0x5
	.error "gAbilityName_SHIELD_DUST may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SHIELD_DUST) < 0x5
	.space 0x5 - (. - gAbilityName_SHIELD_DUST)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gAbilityName_OWN_TEMPO
gAbilityName_OWN_TEMPO: @ 0x082EBE64
	.string "マイペース"
	.byte EOS
	.if (. - gAbilityName_OWN_TEMPO) > 0x6
	.error "gAbilityName_OWN_TEMPO may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_OWN_TEMPO) < 0x6
	.space 0x6 - (. - gAbilityName_OWN_TEMPO)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gAbilityName_SUCTION_CUPS
gAbilityName_SUCTION_CUPS: @ 0x082EBE6C
	.string "きゅうばん"
	.byte EOS
	.if (. - gAbilityName_SUCTION_CUPS) > 0x6
	.error "gAbilityName_SUCTION_CUPS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SUCTION_CUPS) < 0x6
	.space 0x6 - (. - gAbilityName_SUCTION_CUPS)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gAbilityName_INTIMIDATE
gAbilityName_INTIMIDATE: @ 0x082EBE74
	.string "いかく"
	.byte EOS
	.if (. - gAbilityName_INTIMIDATE) > 0x4
	.error "gAbilityName_INTIMIDATE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_INTIMIDATE) < 0x4
	.space 0x4 - (. - gAbilityName_INTIMIDATE)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gAbilityName_SHADOW_TAG
gAbilityName_SHADOW_TAG: @ 0x082EBE7C
	.string "かげふみ"
	.byte EOS
	.if (. - gAbilityName_SHADOW_TAG) > 0x5
	.error "gAbilityName_SHADOW_TAG may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SHADOW_TAG) < 0x5
	.space 0x5 - (. - gAbilityName_SHADOW_TAG)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gAbilityName_ROUGH_SKIN
gAbilityName_ROUGH_SKIN: @ 0x082EBE84
	.string "さめはだ"
	.byte EOS
	.if (. - gAbilityName_ROUGH_SKIN) > 0x5
	.error "gAbilityName_ROUGH_SKIN may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_ROUGH_SKIN) < 0x5
	.space 0x5 - (. - gAbilityName_ROUGH_SKIN)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityName_WONDER_GUARD
gAbilityName_WONDER_GUARD: @ 0x082EBE8C
	.string "ふしぎなまもり"
	.byte EOS
	.if (. - gAbilityName_WONDER_GUARD) != 0x8
	.error "gAbilityName_WONDER_GUARD must retain its original byte length"
	.endif

	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gAbilityName_LEVITATE
gAbilityName_LEVITATE: @ 0x082EBE94
	.string "ふゆう"
	.byte EOS
	.if (. - gAbilityName_LEVITATE) > 0x4
	.error "gAbilityName_LEVITATE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_LEVITATE) < 0x4
	.space 0x4 - (. - gAbilityName_LEVITATE)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gAbilityName_EFFECT_SPORE
gAbilityName_EFFECT_SPORE: @ 0x082EBE9C
	.string "ほうし"
	.byte EOS
	.if (. - gAbilityName_EFFECT_SPORE) > 0x4
	.error "gAbilityName_EFFECT_SPORE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_EFFECT_SPORE) < 0x4
	.space 0x4 - (. - gAbilityName_EFFECT_SPORE)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gAbilityName_SYNCHRONIZE
gAbilityName_SYNCHRONIZE: @ 0x082EBEA4
	.string "シンクロ"
	.byte EOS
	.if (. - gAbilityName_SYNCHRONIZE) > 0x5
	.error "gAbilityName_SYNCHRONIZE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SYNCHRONIZE) < 0x5
	.space 0x5 - (. - gAbilityName_SYNCHRONIZE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gAbilityName_CLEAR_BODY
gAbilityName_CLEAR_BODY: @ 0x082EBEAC
	.string "クリアボディ"
	.byte EOS
	.if (. - gAbilityName_CLEAR_BODY) > 0x7
	.error "gAbilityName_CLEAR_BODY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_CLEAR_BODY) < 0x7
	.space 0x7 - (. - gAbilityName_CLEAR_BODY)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityName_NATURAL_CURE
gAbilityName_NATURAL_CURE: @ 0x082EBEB4
	.string "しぜんかいふく"
	.byte EOS
	.if (. - gAbilityName_NATURAL_CURE) != 0x8
	.error "gAbilityName_NATURAL_CURE must retain its original byte length"
	.endif

	@ src/data/abilities.h:243 abilities_line_243 (+1 aliases)
	.globl gAbilityName_LIGHTNING_ROD
gAbilityName_LIGHTNING_ROD: @ 0x082EBEBC
	.string "ひらいしん"
	.byte EOS
	.if (. - gAbilityName_LIGHTNING_ROD) > 0x6
	.error "gAbilityName_LIGHTNING_ROD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_LIGHTNING_ROD) < 0x6
	.space 0x6 - (. - gAbilityName_LIGHTNING_ROD)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gAbilityName_SERENE_GRACE
gAbilityName_SERENE_GRACE: @ 0x082EBEC4
	.string "てんのめぐみ"
	.byte EOS
	.if (. - gAbilityName_SERENE_GRACE) > 0x7
	.error "gAbilityName_SERENE_GRACE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SERENE_GRACE) < 0x7
	.space 0x7 - (. - gAbilityName_SERENE_GRACE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gAbilityName_SWIFT_SWIM
gAbilityName_SWIFT_SWIM: @ 0x082EBECC
	.string "すいすい"
	.byte EOS
	.if (. - gAbilityName_SWIFT_SWIM) > 0x5
	.error "gAbilityName_SWIFT_SWIM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SWIFT_SWIM) < 0x5
	.space 0x5 - (. - gAbilityName_SWIFT_SWIM)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gAbilityName_CHLOROPHYLL
gAbilityName_CHLOROPHYLL: @ 0x082EBED4
	.string "ようりょくそ"
	.byte EOS
	.if (. - gAbilityName_CHLOROPHYLL) > 0x7
	.error "gAbilityName_CHLOROPHYLL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_CHLOROPHYLL) < 0x7
	.space 0x7 - (. - gAbilityName_CHLOROPHYLL)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gAbilityName_ILLUMINATE
gAbilityName_ILLUMINATE: @ 0x082EBEDC
	.string "はっこう"
	.byte EOS
	.if (. - gAbilityName_ILLUMINATE) > 0x5
	.error "gAbilityName_ILLUMINATE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_ILLUMINATE) < 0x5
	.space 0x5 - (. - gAbilityName_ILLUMINATE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gAbilityName_TRACE
gAbilityName_TRACE: @ 0x082EBEE4
	.string "トレース"
	.byte EOS
	.if (. - gAbilityName_TRACE) > 0x5
	.error "gAbilityName_TRACE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_TRACE) < 0x5
	.space 0x5 - (. - gAbilityName_TRACE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gAbilityName_HUGE_POWER
gAbilityName_HUGE_POWER: @ 0x082EBEEC
	.string "ちからもち"
	.byte EOS
	.if (. - gAbilityName_HUGE_POWER) > 0x6
	.error "gAbilityName_HUGE_POWER may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_HUGE_POWER) < 0x6
	.space 0x6 - (. - gAbilityName_HUGE_POWER)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gAbilityName_POISON_POINT
gAbilityName_POISON_POINT: @ 0x082EBEF4
	.string "どくのトゲ"
	.byte EOS
	.if (. - gAbilityName_POISON_POINT) > 0x6
	.error "gAbilityName_POISON_POINT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_POISON_POINT) < 0x6
	.space 0x6 - (. - gAbilityName_POISON_POINT)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityName_INNER_FOCUS
gAbilityName_INNER_FOCUS: @ 0x082EBEFC
	.string "せいしんりょく"
	.byte EOS
	.if (. - gAbilityName_INNER_FOCUS) != 0x8
	.error "gAbilityName_INNER_FOCUS must retain its original byte length"
	.endif

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gAbilityName_MAGMA_ARMOR
gAbilityName_MAGMA_ARMOR: @ 0x082EBF04
	.string "マグマのよろい"
	.byte EOS
	.if (. - gAbilityName_MAGMA_ARMOR) > 0x8
	.error "gAbilityName_MAGMA_ARMOR may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_MAGMA_ARMOR) < 0x8
	.space 0x8 - (. - gAbilityName_MAGMA_ARMOR)
	.endif

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gAbilityName_WATER_VEIL
gAbilityName_WATER_VEIL: @ 0x082EBF0C
	.string "みずのベール"
	.byte EOS
	.if (. - gAbilityName_WATER_VEIL) > 0x7
	.error "gAbilityName_WATER_VEIL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_WATER_VEIL) < 0x7
	.space 0x7 - (. - gAbilityName_WATER_VEIL)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gAbilityName_MAGNET_PULL
gAbilityName_MAGNET_PULL: @ 0x082EBF14
	.string "じりょく"
	.byte EOS
	.if (. - gAbilityName_MAGNET_PULL) > 0x5
	.error "gAbilityName_MAGNET_PULL may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_MAGNET_PULL) < 0x5
	.space 0x5 - (. - gAbilityName_MAGNET_PULL)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gAbilityName_SOUNDPROOF
gAbilityName_SOUNDPROOF: @ 0x082EBF1C
	.string "ぼうおん"
	.byte EOS
	.if (. - gAbilityName_SOUNDPROOF) > 0x5
	.error "gAbilityName_SOUNDPROOF may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SOUNDPROOF) < 0x5
	.space 0x5 - (. - gAbilityName_SOUNDPROOF)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gAbilityName_RAIN_DISH
gAbilityName_RAIN_DISH: @ 0x082EBF24
	.string "あめうけざら"
	.byte EOS
	.if (. - gAbilityName_RAIN_DISH) > 0x7
	.error "gAbilityName_RAIN_DISH may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_RAIN_DISH) < 0x7
	.space 0x7 - (. - gAbilityName_RAIN_DISH)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gAbilityName_SAND_STREAM
gAbilityName_SAND_STREAM: @ 0x082EBF2C
	.string "すなおこし"
	.byte EOS
	.if (. - gAbilityName_SAND_STREAM) > 0x6
	.error "gAbilityName_SAND_STREAM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SAND_STREAM) < 0x6
	.space 0x6 - (. - gAbilityName_SAND_STREAM)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gAbilityName_PRESSURE
gAbilityName_PRESSURE: @ 0x082EBF34
	.string "プレッシャー"
	.byte EOS
	.if (. - gAbilityName_PRESSURE) > 0x7
	.error "gAbilityName_PRESSURE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_PRESSURE) < 0x7
	.space 0x7 - (. - gAbilityName_PRESSURE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gAbilityName_THICK_FAT
gAbilityName_THICK_FAT: @ 0x082EBF3C
	.string "あついしぼう"
	.byte EOS
	.if (. - gAbilityName_THICK_FAT) > 0x7
	.error "gAbilityName_THICK_FAT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_THICK_FAT) < 0x7
	.space 0x7 - (. - gAbilityName_THICK_FAT)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gAbilityName_EARLY_BIRD
gAbilityName_EARLY_BIRD: @ 0x082EBF44
	.string "はやおき"
	.byte EOS
	.if (. - gAbilityName_EARLY_BIRD) > 0x5
	.error "gAbilityName_EARLY_BIRD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_EARLY_BIRD) < 0x5
	.space 0x5 - (. - gAbilityName_EARLY_BIRD)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gAbilityName_FLAME_BODY
gAbilityName_FLAME_BODY: @ 0x082EBF4C
	.string "ほのおのからだ"
	.byte EOS
	.if (. - gAbilityName_FLAME_BODY) != 0x8
	.error "gAbilityName_FLAME_BODY must retain its original byte length"
	.endif

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gAbilityName_RUN_AWAY
gAbilityName_RUN_AWAY: @ 0x082EBF54
	.string "にげあし"
	.byte EOS
	.if (. - gAbilityName_RUN_AWAY) > 0x5
	.error "gAbilityName_RUN_AWAY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_RUN_AWAY) < 0x5
	.space 0x5 - (. - gAbilityName_RUN_AWAY)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gAbilityName_KEEN_EYE
gAbilityName_KEEN_EYE: @ 0x082EBF5C
	.string "するどいめ"
	.byte EOS
	.if (. - gAbilityName_KEEN_EYE) > 0x6
	.error "gAbilityName_KEEN_EYE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_KEEN_EYE) < 0x6
	.space 0x6 - (. - gAbilityName_KEEN_EYE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gAbilityName_HYPER_CUTTER
gAbilityName_HYPER_CUTTER: @ 0x082EBF64
	.string "かいりきバサミ"
	.byte EOS
	.if (. - gAbilityName_HYPER_CUTTER) > 0x8
	.error "gAbilityName_HYPER_CUTTER may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_HYPER_CUTTER) < 0x8
	.space 0x8 - (. - gAbilityName_HYPER_CUTTER)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gAbilityName_PICKUP
gAbilityName_PICKUP: @ 0x082EBF6C
	.string "ものひろい"
	.byte EOS
	.if (. - gAbilityName_PICKUP) > 0x6
	.error "gAbilityName_PICKUP may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_PICKUP) < 0x6
	.space 0x6 - (. - gAbilityName_PICKUP)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gAbilityName_TRUANT
gAbilityName_TRUANT: @ 0x082EBF74
	.string "なまけ"
	.byte EOS
	.if (. - gAbilityName_TRUANT) > 0x4
	.error "gAbilityName_TRUANT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_TRUANT) < 0x4
	.space 0x4 - (. - gAbilityName_TRUANT)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gAbilityName_HUSTLE
gAbilityName_HUSTLE: @ 0x082EBF7C
	.string "はりきり"
	.byte EOS
	.if (. - gAbilityName_HUSTLE) > 0x5
	.error "gAbilityName_HUSTLE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_HUSTLE) < 0x5
	.space 0x5 - (. - gAbilityName_HUSTLE)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gAbilityName_CUTE_CHARM
gAbilityName_CUTE_CHARM: @ 0x082EBF84
	.string "メロメロボディ"
	.byte EOS
	.if (. - gAbilityName_CUTE_CHARM) > 0x8
	.error "gAbilityName_CUTE_CHARM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_CUTE_CHARM) < 0x8
	.space 0x8 - (. - gAbilityName_CUTE_CHARM)
	.endif

	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gAbilityName_PLUS
gAbilityName_PLUS: @ 0x082EBF8C
	.string "プラス"
	.byte EOS
	.if (. - gAbilityName_PLUS) > 0x4
	.error "gAbilityName_PLUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_PLUS) < 0x4
	.space 0x4 - (. - gAbilityName_PLUS)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gAbilityName_MINUS
gAbilityName_MINUS: @ 0x082EBF94
	.string "マイナス"
	.byte EOS
	.if (. - gAbilityName_MINUS) > 0x5
	.error "gAbilityName_MINUS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_MINUS) < 0x5
	.space 0x5 - (. - gAbilityName_MINUS)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gAbilityName_FORECAST
gAbilityName_FORECAST: @ 0x082EBF9C
	.string "てんきや"
	.byte EOS
	.if (. - gAbilityName_FORECAST) > 0x5
	.error "gAbilityName_FORECAST may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_FORECAST) < 0x5
	.space 0x5 - (. - gAbilityName_FORECAST)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gAbilityName_STICKY_HOLD
gAbilityName_STICKY_HOLD: @ 0x082EBFA4
	.string "ねんちゃく"
	.byte EOS
	.if (. - gAbilityName_STICKY_HOLD) > 0x6
	.error "gAbilityName_STICKY_HOLD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_STICKY_HOLD) < 0x6
	.space 0x6 - (. - gAbilityName_STICKY_HOLD)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gAbilityName_SHED_SKIN
gAbilityName_SHED_SKIN: @ 0x082EBFAC
	.string "だっぴ"
	.byte EOS
	.if (. - gAbilityName_SHED_SKIN) > 0x4
	.error "gAbilityName_SHED_SKIN may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SHED_SKIN) < 0x4
	.space 0x4 - (. - gAbilityName_SHED_SKIN)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gAbilityName_GUTS
gAbilityName_GUTS: @ 0x082EBFB4
	.string "こんじょう"
	.byte EOS
	.if (. - gAbilityName_GUTS) > 0x6
	.error "gAbilityName_GUTS may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_GUTS) < 0x6
	.space 0x6 - (. - gAbilityName_GUTS)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gAbilityName_MARVEL_SCALE
gAbilityName_MARVEL_SCALE: @ 0x082EBFBC
	.string "ふしぎなうろこ"
	.byte EOS
	.if (. - gAbilityName_MARVEL_SCALE) > 0x8
	.error "gAbilityName_MARVEL_SCALE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_MARVEL_SCALE) < 0x8
	.space 0x8 - (. - gAbilityName_MARVEL_SCALE)
	.endif

	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gAbilityName_LIQUID_OOZE
gAbilityName_LIQUID_OOZE: @ 0x082EBFC4
	.string "ヘドロえき"
	.byte EOS
	.if (. - gAbilityName_LIQUID_OOZE) > 0x6
	.error "gAbilityName_LIQUID_OOZE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_LIQUID_OOZE) < 0x6
	.space 0x6 - (. - gAbilityName_LIQUID_OOZE)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gAbilityName_OVERGROW
gAbilityName_OVERGROW: @ 0x082EBFCC
	.string "しんりょく"
	.byte EOS
	.if (. - gAbilityName_OVERGROW) > 0x6
	.error "gAbilityName_OVERGROW may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_OVERGROW) < 0x6
	.space 0x6 - (. - gAbilityName_OVERGROW)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gAbilityName_BLAZE
gAbilityName_BLAZE: @ 0x082EBFD4
	.string "もうか"
	.byte EOS
	.if (. - gAbilityName_BLAZE) > 0x4
	.error "gAbilityName_BLAZE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_BLAZE) < 0x4
	.space 0x4 - (. - gAbilityName_BLAZE)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gAbilityName_TORRENT
gAbilityName_TORRENT: @ 0x082EBFDC
	.string "げきりゅう"
	.byte EOS
	.if (. - gAbilityName_TORRENT) > 0x6
	.error "gAbilityName_TORRENT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_TORRENT) < 0x6
	.space 0x6 - (. - gAbilityName_TORRENT)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gAbilityName_SWARM
gAbilityName_SWARM: @ 0x082EBFE4
	.string "むしのしらせ"
	.byte EOS
	.if (. - gAbilityName_SWARM) > 0x7
	.error "gAbilityName_SWARM may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SWARM) < 0x7
	.space 0x7 - (. - gAbilityName_SWARM)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gAbilityName_ROCK_HEAD
gAbilityName_ROCK_HEAD: @ 0x082EBFEC
	.string "いしあたま"
	.byte EOS
	.if (. - gAbilityName_ROCK_HEAD) > 0x6
	.error "gAbilityName_ROCK_HEAD may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_ROCK_HEAD) < 0x6
	.space 0x6 - (. - gAbilityName_ROCK_HEAD)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gAbilityName_DROUGHT
gAbilityName_DROUGHT: @ 0x082EBFF4
	.string "ひでり"
	.byte EOS
	.if (. - gAbilityName_DROUGHT) > 0x4
	.error "gAbilityName_DROUGHT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_DROUGHT) < 0x4
	.space 0x4 - (. - gAbilityName_DROUGHT)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gAbilityName_ARENA_TRAP
gAbilityName_ARENA_TRAP: @ 0x082EBFFC
	.string "ありじごく"
	.byte EOS
	.if (. - gAbilityName_ARENA_TRAP) > 0x6
	.error "gAbilityName_ARENA_TRAP may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_ARENA_TRAP) < 0x6
	.space 0x6 - (. - gAbilityName_ARENA_TRAP)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gAbilityName_VITAL_SPIRIT
gAbilityName_VITAL_SPIRIT: @ 0x082EC004
	.string "やるき"
	.byte EOS
	.if (. - gAbilityName_VITAL_SPIRIT) > 0x4
	.error "gAbilityName_VITAL_SPIRIT may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_VITAL_SPIRIT) < 0x4
	.space 0x4 - (. - gAbilityName_VITAL_SPIRIT)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gAbilityName_WHITE_SMOKE
gAbilityName_WHITE_SMOKE: @ 0x082EC00C
	.string "しろいけむり"
	.byte EOS
	.if (. - gAbilityName_WHITE_SMOKE) > 0x7
	.error "gAbilityName_WHITE_SMOKE may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_WHITE_SMOKE) < 0x7
	.space 0x7 - (. - gAbilityName_WHITE_SMOKE)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gAbilityName_PURE_POWER
gAbilityName_PURE_POWER: @ 0x082EC014
	.string "ヨガパワー"
	.byte EOS
	.if (. - gAbilityName_PURE_POWER) > 0x6
	.error "gAbilityName_PURE_POWER may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_PURE_POWER) < 0x6
	.space 0x6 - (. - gAbilityName_PURE_POWER)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gAbilityName_SHELL_ARMOR
gAbilityName_SHELL_ARMOR: @ 0x082EC01C
	.string "シェルアーマー"
	.byte EOS
	.if (. - gAbilityName_SHELL_ARMOR) > 0x8
	.error "gAbilityName_SHELL_ARMOR may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_SHELL_ARMOR) < 0x8
	.space 0x8 - (. - gAbilityName_SHELL_ARMOR)
	.endif
	@ ABILITY_CACOPHONY (unused)
	.globl gAbilityName_CACOPHONY
gAbilityName_CACOPHONY: @ 0x082EC024
	.string "そうおん"
	.byte EOS
	.if (. - gAbilityName_CACOPHONY) > 0x8
	.error "gAbilityName_CACOPHONY may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_CACOPHONY) < 0x8
	.space 0x8 - (. - gAbilityName_CACOPHONY), 0
	.endif

	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gAbilityName_AIR_LOCK
gAbilityName_AIR_LOCK: @ 0x082EC02C
	.string "エアロック"
	.byte EOS
	.if (. - gAbilityName_AIR_LOCK) > 0x6
	.error "gAbilityName_AIR_LOCK may not grow beyond its original slot"
	.endif
	.if (. - gAbilityName_AIR_LOCK) < 0x6
	.space 0x6 - (. - gAbilityName_AIR_LOCK)
	.endif
	.space 0x2, 0 @ fixed-slot padding

.if (. - gAbilityNames) != 0x270
	.error "gAbilityNames must be exactly 0x270 bytes"
.endif
