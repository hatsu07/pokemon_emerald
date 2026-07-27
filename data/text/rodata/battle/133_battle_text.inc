	@ src/battle_message.c:295 battle_message_line_295
	.globl gText_Rom_5A9EE9
gText_Rom_5A9EE9: @ 0x085A9EE9
	.string "{B_BUFF1}円\nひろった!\p$"
	.if (. - gText_Rom_5A9EE9) > 0xb
	.error "gText_Rom_5A9EE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EE9) < 0xb
	.space 0xb - (. - gText_Rom_5A9EE9)
	.endif

	@ src/battle_message.c:296 battle_message_line_296
	.globl gText_Rom_5A9EF4
gText_Rom_5A9EF4: @ 0x085A9EF4
	.string "{B_DEF_NAME_WITH_PREFIX}には\nぜんぜんきいてない!$"
	.if (. - gText_Rom_5A9EF4) > 0x10
	.error "gText_Rom_5A9EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EF4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9EF4)
	.endif

	@ src/battle_message.c:297 battle_message_line_297
	.globl gText_Rom_5A9F04
gText_Rom_5A9F04: @ 0x085A9F04
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}に へんしんした!$"
	.if (. - gText_Rom_5A9F04) > 0x10
	.error "gText_Rom_5A9F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F04) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F04)
	.endif

	@ src/battle_message.c:298 battle_message_line_298
	.globl gText_Rom_5A9F14
gText_Rom_5A9F14: @ 0x085A9F14
	.string "{B_ATK_NAME_WITH_PREFIX}の\nぶんしんが あらわれた$"
	.if (. - gText_Rom_5A9F14) > 0x10
	.error "gText_Rom_5A9F14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F14) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F14)
	.endif

	@ src/battle_message.c:299 battle_message_line_299
	.globl gText_Rom_5A9F24
gText_Rom_5A9F24: @ 0x085A9F24
	.string "しかし {B_ATK_NAME_WITH_PREFIX}の\nみがわりは すでに でていた!$"
	.if (. - gText_Rom_5A9F24) > 0x18
	.error "gText_Rom_5A9F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F24) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F24)
	.endif
	.incbin "baserom.gba", 0x5a9f3c, 0x30

	@ src/battle_message.c:302 battle_message_line_302
	.globl gText_Rom_5A9F6C
gText_Rom_5A9F6C: @ 0x085A9F6C
	.string "こうげきの はんどうで\n{B_ATK_NAME_WITH_PREFIX}は うごけない!$"
	.if (. - gText_Rom_5A9F6C) > 0x17
	.error "gText_Rom_5A9F6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F6C) < 0x17
	.space 0x17 - (. - gText_Rom_5A9F6C)
	.endif

	@ src/battle_message.c:303 battle_message_line_303
	.globl gText_Rom_5A9F83
gText_Rom_5A9F83: @ 0x085A9F83
	.string "{B_DEF_NAME_WITH_PREFIX}の いかりの\nボルテージが あがっていく!$"
	.if (. - gText_Rom_5A9F83) > 0x18
	.error "gText_Rom_5A9F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F83) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F83)
	.endif

	@ src/battle_message.c:304 battle_message_line_304
	.globl gText_Rom_5A9F9B
gText_Rom_5A9F9B: @ 0x085A9F9B
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を ふうじこめた!$"
	.if (. - gText_Rom_5A9F9B) > 0x10
	.error "gText_Rom_5A9F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F9B) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F9B)
	.endif
	.incbin "baserom.gba", 0x5a9fab, 0x10

	@ src/battle_message.c:307 battle_message_line_307
	.globl gText_Rom_5A9FBB
gText_Rom_5A9FBB: @ 0x085A9FBB
	.string "{B_DEF_NAME_WITH_PREFIX}は\nアンコールを うけた!$"
	.if (. - gText_Rom_5A9FBB) > 0x10
	.error "gText_Rom_5A9FBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FBB) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FBB)
	.endif
	.incbin "baserom.gba", 0x5a9fcb, 0x28

	@ src/battle_message.c:311 battle_message_line_311
	.globl gText_Rom_5A9FF3
gText_Rom_5A9FF3: @ 0x085A9FF3
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}を スケッチした!$"
	.if (. - gText_Rom_5A9FF3) > 0x10
	.error "gText_Rom_5A9FF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FF3) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FF3)
	.endif

	@ src/battle_message.c:312 battle_message_line_312
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA003
gText_Rom_5AA003: @ 0x085AA003
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてを\nみちづれに しようとしている$"
	.if (. - gText_Rom_5AA003) != 0x18
	.error "gText_Rom_5AA003 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA017
	.set gText_Rom_5AA017, gText_Rom_5AA003 + 0x14
	.incbin "baserom.gba", 0x5aa01b, 0x12

	@ src/battle_message.c:314 battle_message_line_314
	.globl gText_Rom_5AA02D
gText_Rom_5AA02D: @ 0x085AA02D
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を {B_BUFF2}けずった!$"
	.if (. - gText_Rom_5AA02D) > 0x10
	.error "gText_Rom_5AA02D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA02D) < 0x10
	.space 0x10 - (. - gText_Rom_5AA02D)
	.endif
	.incbin "baserom.gba", 0x5aa03d, 0x15

	@ src/battle_message.c:316 battle_message_line_316
	.globl gText_Rom_5AA052
gText_Rom_5AA052: @ 0x085AA052
	.string "{B_DEF_NAME_WITH_PREFIX}は\nもう にげられない!$"
	.if (. - gText_Rom_5AA052) > 0xf
	.error "gText_Rom_5AA052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA052) < 0xf
	.space 0xf - (. - gText_Rom_5AA052)
	.endif

	@ src/battle_message.c:317 battle_message_line_317
	.globl gText_Rom_5AA061
gText_Rom_5AA061: @ 0x085AA061
	.string "{B_DEF_NAME_WITH_PREFIX}は\nあくむを みはじめた!$"
	.if (. - gText_Rom_5AA061) > 0x10
	.error "gText_Rom_5AA061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA061) < 0x10
	.space 0x10 - (. - gText_Rom_5AA061)
	.endif

	@ src/battle_message.c:318 battle_message_line_318
	.globl gText_Rom_5AA071
gText_Rom_5AA071: @ 0x085AA071
	.string "{B_ATK_NAME_WITH_PREFIX}は\nあくむに うなされている!$"
	.if (. - gText_Rom_5AA071) > 0x12
	.error "gText_Rom_5AA071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA071) < 0x12
	.space 0x12 - (. - gText_Rom_5AA071)
	.endif
	.incbin "baserom.gba", 0x5aa083, 0x23

	@ src/battle_message.c:320 battle_message_line_320
	.globl gText_Rom_5AA0A6
gText_Rom_5AA0A6: @ 0x085AA0A6
	.string "{B_ATK_NAME_WITH_PREFIX}は\nのろわれている!$"
	.if (. - gText_Rom_5AA0A6) > 0xd
	.error "gText_Rom_5AA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0A6) < 0xd
	.space 0xd - (. - gText_Rom_5AA0A6)
	.endif
	.incbin "baserom.gba", 0x5aa0b3, 0x16

	@ src/battle_message.c:322 battle_message_line_322
	.globl gText_Rom_5AA0C9
gText_Rom_5AA0C9: @ 0x085AA0C9
	.string "{B_SCR_NAME_WITH_PREFIX}は まきびしの\nダメージを うけた!$"
	.if (. - gText_Rom_5AA0C9) > 0x15
	.error "gText_Rom_5AA0C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0C9) < 0x15
	.space 0x15 - (. - gText_Rom_5AA0C9)
	.endif
	.incbin "baserom.gba", 0x5aa0de, 0x4

	@ src/battle_message.c:323 battle_message_line_323
	.globl gText_Rom_5AA0E2
gText_Rom_5AA0E2: @ 0x085AA0E2
	.string "{B_DEF_NAME_WITH_PREFIX}の\nしょうたいを みやぶった!$"
	.if (. - gText_Rom_5AA0E2) > 0x12
	.error "gText_Rom_5AA0E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0E2) < 0x12
	.space 0x12 - (. - gText_Rom_5AA0E2)
	.endif

	@ src/battle_message.c:324 battle_message_line_324
	.globl gText_Rom_5AA0F4
gText_Rom_5AA0F4: @ 0x085AA0F4
	.string "{B_ATK_NAME_WITH_PREFIX}の ほろびの\nカウントが {B_BUFF1}になった!$"
	.if (. - gText_Rom_5AA0F4) > 0x17
	.error "gText_Rom_5AA0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0F4) < 0x17
	.space 0x17 - (. - gText_Rom_5AA0F4)
	.endif

	@ src/battle_message.c:325 battle_message_line_325
	.globl gText_Rom_5AA10B
gText_Rom_5AA10B: @ 0x085AA10B
	.string "{B_ATK_NAME_WITH_PREFIX}は こらえる\nたいせいに はいった!$"
	.if (. - gText_Rom_5AA10B) > 0x15
	.error "gText_Rom_5AA10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA10B) < 0x15
	.space 0x15 - (. - gText_Rom_5AA10B)
	.endif

	@ src/battle_message.c:326 battle_message_line_326
	.globl gText_Rom_5AA120
gText_Rom_5AA120: @ 0x085AA120
	.string "{B_DEF_NAME_WITH_PREFIX}は こうげきを\nこらえた!$"
	.if (. - gText_Rom_5AA120) > 0x10
	.error "gText_Rom_5AA120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA120) < 0x10
	.space 0x10 - (. - gText_Rom_5AA120)
	.endif

	@ src/battle_message.c:327 battle_message_line_327
	.globl gText_Rom_5AA130
gText_Rom_5AA130: @ 0x085AA130
	.string "マグニチュード{B_BUFF1}！！$"
	.if (. - gText_Rom_5AA130) > 0xc
	.error "gText_Rom_5AA130 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA130) < 0xc
	.space 0xc - (. - gText_Rom_5AA130)
	.endif

	@ src/battle_message.c:328 battle_message_line_328
	.globl gText_Rom_5AA13C
gText_Rom_5AA13C: @ 0x085AA13C
	.string "{B_ATK_NAME_WITH_PREFIX}は たいりょくを けずって\nパワーぜんかいに なった!$"
	.if (. - gText_Rom_5AA13C) > 0x1e
	.error "gText_Rom_5AA13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA13C) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA13C)
	.endif
	.incbin "baserom.gba", 0x5aa15a, 0x2d

	@ src/battle_message.c:331 battle_message_line_331
	.globl gText_Rom_5AA187
gText_Rom_5AA187: @ 0x085AA187
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやどりぎのタネを ふきとばした!$"
	.if (. - gText_Rom_5AA187) > 0x15
	.error "gText_Rom_5AA187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA187) < 0x15
	.space 0x15 - (. - gText_Rom_5AA187)
	.endif

	@ src/battle_message.c:332 battle_message_line_332
	.globl gText_Rom_5AA19C
gText_Rom_5AA19C: @ 0x085AA19C
	.string "{B_ATK_NAME_WITH_PREFIX}は まきびしを\nふきとばした!$"
	.if (. - gText_Rom_5AA19C) > 0x12
	.error "gText_Rom_5AA19C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA19C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA19C)
	.endif

	@ src/battle_message.c:333 battle_message_line_333
	.globl gText_Rom_5AA1AE
gText_Rom_5AA1AE: @ 0x085AA1AE
	.string "{B_ATK_NAME_WITH_PREFIX}は せんとうから\nりだつした!$"
	.if (. - gText_Rom_5AA1AE) > 0x12
	.error "gText_Rom_5AA1AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1AE) < 0x12
	.space 0x12 - (. - gText_Rom_5AA1AE)
	.endif

	@ src/battle_message.c:334 battle_message_line_334
	.globl gText_Rom_5AA1C0
gText_Rom_5AA1C0: @ 0x085AA1C0
	.string "{B_ATK_NAME_WITH_PREFIX}は みらいに\nこうげきを よちした!$"
	.if (. - gText_Rom_5AA1C0) > 0x15
	.error "gText_Rom_5AA1C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1C0) < 0x15
	.space 0x15 - (. - gText_Rom_5AA1C0)
	.endif

	@ src/battle_message.c:335 battle_message_line_335 (+1 aliases)
	.globl gText_Rom_5AA1D5
gText_Rom_5AA1D5: @ 0x085AA1D5
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_BUFF1}の\nこうげきを うけた!$"
	.if (. - gText_Rom_5AA1D5) > 0x13
	.error "gText_Rom_5AA1D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1D5) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1D5)
	.endif

	@ src/battle_message.c:489 battle_message_line_489
	.globl gText_Rom_5AA1E8
gText_Rom_5AA1E8: @ 0x085AA1E8
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_CURRENT_MOVE}を\nみらいに たくした!$"
	.if (. - gText_Rom_5AA1E8) > 0x13
	.error "gText_Rom_5AA1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1E8) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1E8)
	.endif

	@ src/battle_message.c:336 battle_message_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA1FB
gText_Rom_5AA1FB: @ 0x085AA1FB
	.string "{B_BUFF1}の こうげき!$"
	.if (. - gText_Rom_5AA1FB) != 0xa
	.error "gText_Rom_5AA1FB must retain its original byte length"
	.endif
	.globl gText_Rom_5AA1FE
	.set gText_Rom_5AA1FE, gText_Rom_5AA1FB + 0x3
	.incbin "baserom.gba", 0x5aa205, 0x14

	@ src/battle_message.c:338 battle_message_line_338
	.globl gText_Rom_5AA219
gText_Rom_5AA219: @ 0x085AA219
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじゅうでんを はじめた!$"
	.if (. - gText_Rom_5AA219) > 0x11
	.error "gText_Rom_5AA219 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA219) < 0x11
	.space 0x11 - (. - gText_Rom_5AA219)
	.endif

	@ src/battle_message.c:339 battle_message_line_339
	.globl gText_Rom_5AA22A
gText_Rom_5AA22A: @ 0x085AA22A
	.string "しぜんのちからは\n{B_CURRENT_MOVE}に なった!$"
	.if (. - gText_Rom_5AA22A) > 0x12
	.error "gText_Rom_5AA22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA22A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA22A)
	.endif

	@ src/battle_message.c:340 battle_message_line_340
	.globl gText_Rom_5AA23C
gText_Rom_5AA23C: @ 0x085AA23C
	.string "{B_ATK_NAME_WITH_PREFIX}の じょうたいいじょうが\nなおった!$"
	.if (. - gText_Rom_5AA23C) > 0x15
	.error "gText_Rom_5AA23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA23C) < 0x15
	.space 0x15 - (. - gText_Rom_5AA23C)
	.endif

	@ src/battle_message.c:342 battle_message_line_342
	.globl gText_Rom_5AA251
gText_Rom_5AA251: @ 0x085AA251
	.string "{B_DEF_NAME_WITH_PREFIX}は\nいちゃもんを つけられた!$"
	.if (. - gText_Rom_5AA251) > 0x12
	.error "gText_Rom_5AA251 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA251) < 0x12
	.space 0x12 - (. - gText_Rom_5AA251)
	.endif
	.incbin "baserom.gba", 0x5aa263, 0x17

	@ src/battle_message.c:345 battle_message_line_345
	.globl gText_Rom_5AA27A
gText_Rom_5AA27A: @ 0x085AA27A
	.string "{B_DEF_NAME_WITH_PREFIX}は \nちょうはつに のってしまった!$"
	.if (. - gText_Rom_5AA27A) > 0x15
	.error "gText_Rom_5AA27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA27A) < 0x15
	.space 0x15 - (. - gText_Rom_5AA27A)
	.endif
	.incbin "baserom.gba", 0x5aa28f, 0x1c

	@ src/battle_message.c:348 battle_message_line_348
	.globl gText_Rom_5AA2AB
gText_Rom_5AA2AB: @ 0x085AA2AB
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nどうぐを いれかえた!$"
	.if (. - gText_Rom_5AA2AB) > 0x16
	.error "gText_Rom_5AA2AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA2AB) < 0x16
	.space 0x16 - (. - gText_Rom_5AA2AB)
	.endif
	.incbin "baserom.gba", 0x5aa2c1, 0x5c

	@ src/battle_message.c:145 sText_ExclamationMark3
	.globl gText_Rom_5AA31D
gText_Rom_5AA31D: @ 0x085AA31D
	.string "を した!$"
	.if (. - gText_Rom_5AA31D) > 0x6
	.error "gText_Rom_5AA31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA31D) < 0x6
	.space 0x6 - (. - gText_Rom_5AA31D)
	.endif

	@ src/battle_message.c:350 battle_message_line_350
	.globl gText_Rom_5AA323
gText_Rom_5AA323: @ 0x085AA323
	.string "{B_BUFF1}の\nねがいごとが かなった!$"
	.if (. - gText_Rom_5AA323) > 0x11
	.error "gText_Rom_5AA323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA323) < 0x11
	.space 0x11 - (. - gText_Rom_5AA323)
	.endif

	@ src/battle_message.c:351 battle_message_line_351
	.globl gText_Rom_5AA334
gText_Rom_5AA334: @ 0x085AA334
	.string "{B_ATK_NAME_WITH_PREFIX}は ねを はった!$"
	.if (. - gText_Rom_5AA334) > 0xc
	.error "gText_Rom_5AA334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA334) < 0xc
	.space 0xc - (. - gText_Rom_5AA334)
	.endif

	@ src/battle_message.c:352 battle_message_line_352
	.globl gText_Rom_5AA340
gText_Rom_5AA340: @ 0x085AA340
	.string "{B_ATK_NAME_WITH_PREFIX}は ねから\nようぶんを すいとった!$"
	.if (. - gText_Rom_5AA340) > 0x15
	.error "gText_Rom_5AA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA340) < 0x15
	.space 0x15 - (. - gText_Rom_5AA340)
	.endif

	@ src/battle_message.c:353 battle_message_line_353
	.globl gText_Rom_5AA355
gText_Rom_5AA355: @ 0x085AA355
	.string "{B_DEF_NAME_WITH_PREFIX}は ねを はって\nうごかない!$"
	.if (. - gText_Rom_5AA355) > 0x12
	.error "gText_Rom_5AA355 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA355) < 0x12
	.space 0x12 - (. - gText_Rom_5AA355)
	.endif

	@ src/battle_message.c:354 battle_message_line_354
	.globl gText_Rom_5AA367
gText_Rom_5AA367: @ 0x085AA367
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_DEF_NAME_WITH_PREFIX}の\nねむけを さそった!$"
	.if (. - gText_Rom_5AA367) > 0x13
	.error "gText_Rom_5AA367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA367) < 0x13
	.space 0x13 - (. - gText_Rom_5AA367)
	.endif
	.incbin "baserom.gba", 0x5aa37a, 0x15

	@ src/battle_message.c:356 battle_message_line_356
	.globl gText_Rom_5AA38F
gText_Rom_5AA38F: @ 0x085AA38F
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nとくせいを いれかえた!$"
	.if (. - gText_Rom_5AA38F) > 0x17
	.error "gText_Rom_5AA38F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA38F) < 0x17
	.space 0x17 - (. - gText_Rom_5AA38F)
	.endif

	@ src/battle_message.c:357 battle_message_line_357
	.globl gText_Rom_5AA3A6
gText_Rom_5AA3A6: @ 0x085AA3A6
	.string "{B_ATK_NAME_WITH_PREFIX}は あいての\nわざを ふういんした!$"
	.if (. - gText_Rom_5AA3A6) > 0x15
	.error "gText_Rom_5AA3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3A6) < 0x15
	.space 0x15 - (. - gText_Rom_5AA3A6)
	.endif

	@ src/battle_message.c:359 battle_message_line_359
	.globl gText_Rom_5AA3BB
gText_Rom_5AA3BB: @ 0x085AA3BB
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてに\nおんねんを かけようと している!$"
	.if (. - gText_Rom_5AA3BB) > 0x1b
	.error "gText_Rom_5AA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3BB) < 0x1b
	.space 0x1b - (. - gText_Rom_5AA3BB)
	.endif

	@ src/battle_message.c:360 battle_message_line_360
	.globl gText_Rom_5AA3D6
gText_Rom_5AA3D6: @ 0x085AA3D6
	.string "{B_ATK_NAME_WITH_PREFIX}の {B_BUFF1}は\nおんねんで わざポイントが 0に なった!$"
	.if (. - gText_Rom_5AA3D6) > 0x1e
	.error "gText_Rom_5AA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3D6) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA3D6)
	.endif

	@ src/battle_message.c:361 battle_message_line_361
	.globl gText_Rom_5AA3F4
gText_Rom_5AA3F4: @ 0x085AA3F4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_CURRENT_MOVE}に つつまれた!$"
	.if (. - gText_Rom_5AA3F4) > 0xf
	.error "gText_Rom_5AA3F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3F4) < 0xf
	.space 0xf - (. - gText_Rom_5AA3F4)
	.endif
	.incbin "baserom.gba", 0x5aa403, 0x45

	@ src/battle_message.c:470 battle_message_line_470
	.globl gText_Rom_5AA448
gText_Rom_5AA448: @ 0x085AA448
	.string "でんきの いりょくが よわまった!$"
	.if (. - gText_Rom_5AA448) > 0x12
	.error "gText_Rom_5AA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA448) < 0x12
	.space 0x12 - (. - gText_Rom_5AA448)
	.endif

	@ src/battle_message.c:471 battle_message_line_471
	.globl gText_Rom_5AA45A
gText_Rom_5AA45A: @ 0x085AA45A
	.string "ほのおの いりょくが よわまった!$"
	.if (. - gText_Rom_5AA45A) > 0x12
	.error "gText_Rom_5AA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA45A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA45A)
	.endif
	.incbin "baserom.gba", 0x5aa46c, 0x10

	@ src/battle_message.c:477 battle_message_line_477
	.globl gText_Rom_5AA47C
gText_Rom_5AA47C: @ 0x085AA47C
	.string "ここちよい かおりが ひろがった!$"
	.if (. - gText_Rom_5AA47C) > 0x12
	.error "gText_Rom_5AA47C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA47C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA47C)
	.endif
	.incbin "baserom.gba", 0x5aa48e, 0x27

	@ src/battle_message.c:481 battle_message_line_481
	.globl gText_Rom_5AA4B5
gText_Rom_5AA4B5: @ 0x085AA4B5
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}を つかって\nはりきり だした!$"
	.if (. - gText_Rom_5AA4B5) > 0x17
	.error "gText_Rom_5AA4B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4B5) < 0x17
	.space 0x17 - (. - gText_Rom_5AA4B5)
	.endif
	.incbin "baserom.gba", 0x5aa4cc, 0x4

	@ src/battle_message.c:490 battle_message_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA4D0
gText_Rom_5AA4D0: @ 0x085AA4D0
	.string "しゅうちゅうりょくが\nとぎれて わざが だせなかった!$"
	.if (. - gText_Rom_5AA4D0) != 0x1c
	.error "gText_Rom_5AA4D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA4E7
	.set gText_Rom_5AA4E7, gText_Rom_5AA4D0 + 0x17

	@ src/battle_message.c:494 battle_message_line_494
	.globl gText_Rom_5AA4EC
gText_Rom_5AA4EC: @ 0x085AA4EC
	.string "{B_DEF_NAME_WITH_PREFIX}は せんとうに\nひきずりだされた!\p$"
	.if (. - gText_Rom_5AA4EC) > 0x15
	.error "gText_Rom_5AA4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4EC) < 0x15
	.space 0x15 - (. - gText_Rom_5AA4EC)
	.endif

	@ src/battle_message.c:503 battle_message_line_503
	.globl gText_Rom_5AA501
gText_Rom_5AA501: @ 0x085AA501
	.string "かべが こわれた!$"
	.if (. - gText_Rom_5AA501) > 0xa
	.error "gText_Rom_5AA501 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA501) < 0xa
	.space 0xa - (. - gText_Rom_5AA501)
	.endif

	@ src/battle_message.c:509 battle_message_line_509
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA50B
gText_Rom_5AA50B: @ 0x085AA50B
	.string "しかし こうかが なかった!$"
	.if (. - gText_Rom_5AA50B) != 0xf
	.error "gText_Rom_5AA50B must retain its original byte length"
	.endif
	.globl gText_Rom_5AA515
	.set gText_Rom_5AA515, gText_Rom_5AA50B + 0xa
	.incbin "baserom.gba", 0x5aa51a, 0x82

	@ src/battle_message.c:365 battle_message_line_365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA59C
gText_Rom_5AA59C: @ 0x085AA59C
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nあめが ふりはじめた!$"
	.if (. - gText_Rom_5AA59C) != 0x14
	.error "gText_Rom_5AA59C must retain its original byte length"
	.endif
	.globl gText_Rom_5AA5A4
	.set gText_Rom_5AA5A4, gText_Rom_5AA59C + 0x8
	.incbin "baserom.gba", 0x5aa5b0, 0xe

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA5BE
gText_Rom_5AA5BE: @ 0x085AA5BE
	.string "あがった！$"
	.if (. - gText_Rom_5AA5BE) > 0x6
	.error "gText_Rom_5AA5BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA5BE) < 0x6
	.space 0x6 - (. - gText_Rom_5AA5BE)
	.endif

	@ src/battle_message.c:366 battle_message_line_366
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA5C4
gText_Rom_5AA5C4: @ 0x085AA5C4
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_DEF_ABILITY}で\nきかなかった!$"
	.if (. - gText_Rom_5AA5C4) != 0x10
	.error "gText_Rom_5AA5C4 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA5CF
	.set gText_Rom_5AA5CF, gText_Rom_5AA5C4 + 0xb
	.incbin "baserom.gba", 0x5aa5d4, 0x38

