	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:317 Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_24023E
gText_Rom_24023E: @ 0x0824023E
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま だきしめたい」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_24023E) > 0x45
	.error "gText_Rom_24023E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24023E) < 0x45
	.space 0x45 - (. - gText_Rom_24023E)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:320 Route110_TrickHousePuzzle7_Text_JoshuaIntro (+1 aliases)
	.globl gText_Rom_240283
gText_Rom_240283: @ 0x08240283
	.string "いつも カラクリだいおうは パッと\nきえちゃうけど どう やってるんだろ?{EOS}"
	.if (. - gText_Rom_240283) > 0x26
	.error "gText_Rom_240283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240283) < 0x26
	.space 0x26 - (. - gText_Rom_240283)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:323 Route110_TrickHousePuzzle7_Text_JoshuaDefeat (+1 aliases)
	.globl gText_Rom_2402A9
gText_Rom_2402A9: @ 0x082402A9
	.string "ひえー\nなんで そんなに つよいの?{EOS}"
	.if (. - gText_Rom_2402A9) > 0x13
	.error "gText_Rom_2402A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402A9) < 0x13
	.space 0x13 - (. - gText_Rom_2402A9)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:326 Route110_TrickHousePuzzle7_Text_JoshuaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2402BC
gText_Rom_2402BC: @ 0x082402BC
	.string "ぼくも じゆう じざいに\nきえたり あらわれたり してみたいな{EOS}"
	.if (. - gText_Rom_2402BC) != 0x20
	.error "gText_Rom_2402BC must retain its original byte length"
	.endif
	.globl gText_Rom_2402D7
	.set gText_Rom_2402D7, gText_Rom_2402BC + 0x1b
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:329 Route110_TrickHousePuzzle7_Text_PatriciaIntro (+1 aliases)
	.globl gText_Rom_2402DC
gText_Rom_2402DC: @ 0x082402DC
	.string "おなじところを つづけて\nなんども まわると ふきつなのよ……{EOS}"
	.if (. - gText_Rom_2402DC) > 0x20
	.error "gText_Rom_2402DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402DC) < 0x20
	.space 0x20 - (. - gText_Rom_2402DC)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:332 Route110_TrickHousePuzzle7_Text_PatriciaDefeat (+1 aliases)
	.globl gText_Rom_2402FC
gText_Rom_2402FC: @ 0x082402FC
	.string "まけた……!\nえんぎが わるいわ……!{EOS}"
	.if (. - gText_Rom_2402FC) > 0x14
	.error "gText_Rom_2402FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2402FC) < 0x14
	.space 0x14 - (. - gText_Rom_2402FC)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:335 Route110_TrickHousePuzzle7_Text_PatriciaPostBattle
	.globl gText_Rom_240310
gText_Rom_240310: @ 0x08240310
	.string "わたしは もう 10かい いじょう\nまわってしまった…… ふきつだわ……{EOS}"
	.if (. - gText_Rom_240310) > 0x25
	.error "gText_Rom_240310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240310) < 0x25
	.space 0x25 - (. - gText_Rom_240310)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:338 Route110_TrickHousePuzzle7_Text_AlexisIntro (+1 aliases)
	.globl gText_Rom_240335
gText_Rom_240335: @ 0x08240335
	.string "かった ほうが さきに このしかけを\nぬけられる よかんが するわ!{EOS}"
	.if (. - gText_Rom_240335) > 0x23
	.error "gText_Rom_240335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240335) < 0x23
	.space 0x23 - (. - gText_Rom_240335)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:341 Route110_TrickHousePuzzle7_Text_AlexisDefeat (+1 aliases)
	.globl gText_Rom_240358
gText_Rom_240358: @ 0x08240358
	.string "あら!\nじゃあ おさきに どうぞ!{EOS}"
	.if (. - gText_Rom_240358) > 0x12
	.error "gText_Rom_240358 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240358) < 0x12
	.space 0x12 - (. - gText_Rom_240358)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:344 Route110_TrickHousePuzzle7_Text_AlexisPostBattle
	.globl gText_Rom_24036A
gText_Rom_24036A: @ 0x0824036A
	.string "あなたは カラクリやしきの しかけを\nすべて とく って よかんが するわ!{EOS}"
	.if (. - gText_Rom_24036A) > 0x27
	.error "gText_Rom_24036A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24036A) < 0x27
	.space 0x27 - (. - gText_Rom_24036A)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:347 Route110_TrickHousePuzzle7_Text_MarielaIntro (+1 aliases)
	.globl gText_Rom_240391
gText_Rom_240391: @ 0x08240391
	.string "んっふっふっふ きたわねっ\nさあ しょうぶよ!{EOS}"
	.if (. - gText_Rom_240391) > 0x18
	.error "gText_Rom_240391 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240391) < 0x18
	.space 0x18 - (. - gText_Rom_240391)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:350 Route110_TrickHousePuzzle7_Text_MarielaDefeat (+1 aliases)
	.globl gText_Rom_2403A9
gText_Rom_2403A9: @ 0x082403A9
	.string "あっさり かってくれちゃって!{EOS}"
	.if (. - gText_Rom_2403A9) > 0x10
	.error "gText_Rom_2403A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403A9) < 0x10
	.space 0x10 - (. - gText_Rom_2403A9)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:353 Route110_TrickHousePuzzle7_Text_MarielaPostBattle
	.globl gText_Rom_2403B9
gText_Rom_2403B9: @ 0x082403B9
	.string "ふん べつに くやしく ないから!\nわたし!{EOS}"
	.if (. - gText_Rom_2403B9) > 0x17
	.error "gText_Rom_2403B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403B9) < 0x17
	.space 0x17 - (. - gText_Rom_2403B9)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:356 Route110_TrickHousePuzzle7_Text_AlvaroIntro (+1 aliases)
	.globl gText_Rom_2403D0
gText_Rom_2403D0: @ 0x082403D0
	.string "きみが どんどん\nちかづいて くるのを みていたぜ!{EOS}"
	.if (. - gText_Rom_2403D0) > 0x1b
	.error "gText_Rom_2403D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403D0) < 0x1b
	.space 0x1b - (. - gText_Rom_2403D0)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:359 Route110_TrickHousePuzzle7_Text_AlvaroDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2403EB
gText_Rom_2403EB: @ 0x082403EB
	.string "こんな けっかは\nみえなかった{EOS}"
	.if (. - gText_Rom_2403EB) != 0x10
	.error "gText_Rom_2403EB must retain its original byte length"
	.endif
	.globl gText_Rom_2403F6
	.set gText_Rom_2403F6, gText_Rom_2403EB + 0xb
	.globl gText_Rom_2403F7
	.set gText_Rom_2403F7, gText_Rom_2403EB + 0xc
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:362 Route110_TrickHousePuzzle7_Text_AlvaroPostBattle
	.globl gText_Rom_2403FB
gText_Rom_2403FB: @ 0x082403FB
	.string "ま こんな ところで あったんだ\nものずき どうし おたがい がんばろうぜ!{EOS}"
	.if (. - gText_Rom_2403FB) > 0x27
	.error "gText_Rom_2403FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2403FB) < 0x27
	.space 0x27 - (. - gText_Rom_2403FB)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:365 Route110_TrickHousePuzzle7_Text_EverettIntro (+1 aliases)
	.globl gText_Rom_240422
gText_Rom_240422: @ 0x08240422
	.string "せ せまいな……\nここは……{EOS}"
	.if (. - gText_Rom_240422) > 0xf
	.error "gText_Rom_240422 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240422) < 0xf
	.space 0xf - (. - gText_Rom_240422)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:368 Route110_TrickHousePuzzle7_Text_EverettDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_240431
gText_Rom_240431: @ 0x08240431
	.string "おお つよいつよい{EOS}"
	.if (. - gText_Rom_240431) != 0xa
	.error "gText_Rom_240431 must retain its original byte length"
	.endif
	.globl gText_Rom_240437
	.set gText_Rom_240437, gText_Rom_240431 + 0x6
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:371 Route110_TrickHousePuzzle7_Text_EverettPostBattle
	.globl gText_Rom_24043B
gText_Rom_24043B: @ 0x0824043B
	.string "もし かったら いれかわって やれと\nおもって いたんだけどね{EOS}"
	.if (. - gText_Rom_24043B) > 0x20
	.error "gText_Rom_24043B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24043B) < 0x20
	.space 0x20 - (. - gText_Rom_24043B)
	.endif
	@ Embedded ROM bytes: file offset 0x24045B, size 0x63
	.byte 0x00, 0x69, 0x21, 0xB2, 0x40, 0x00, 0x00, 0x06, 0x01, 0x6E, 0x04, 0x24, 0x08, 0x05, 0xAC, 0xD1
	.byte 0x23, 0x08, 0x02, 0x16, 0xB2, 0x40, 0x01, 0x00, 0x05, 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00
	.byte 0x4C, 0x00, 0x00, 0x00, 0x02, 0x05, 0x24, 0x08, 0x1E, 0x05, 0x24, 0x08, 0x0F, 0x00, 0x33, 0x05
	.byte 0x24, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x5D, 0x00, 0x00, 0x00, 0x57, 0x05, 0x24, 0x08, 0x73
	.byte 0x05, 0x24, 0x08, 0x0F, 0x00, 0x86, 0x05, 0x24, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x4D, 0x00
	.byte 0x00, 0x00, 0xA5, 0x05, 0x24, 0x08, 0xC7, 0x05, 0x24, 0x08, 0x0F, 0x00, 0xDC, 0x05, 0x24, 0x08
	.byte 0x09, 0x06, 0x02
