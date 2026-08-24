	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:317 Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened
	.globl Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened
Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened: @ 0x0824023E
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま だきしめたい」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened) > 0x45
	.error "Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened) < 0x45
	.space 0x45 - (. - Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:320 Route110_TrickHousePuzzle7_Text_JoshuaIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_JoshuaIntro
Route110_TrickHousePuzzle7_Text_JoshuaIntro: @ 0x08240283
	.string "いつも カラクリだいおうは パッと\nきえちゃうけど どう やってるんだろ?{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_JoshuaIntro) > 0x26
	.error "Route110_TrickHousePuzzle7_Text_JoshuaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_JoshuaIntro) < 0x26
	.space 0x26 - (. - Route110_TrickHousePuzzle7_Text_JoshuaIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:323 Route110_TrickHousePuzzle7_Text_JoshuaDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_JoshuaDefeat
Route110_TrickHousePuzzle7_Text_JoshuaDefeat: @ 0x082402A9
	.string "ひえー\nなんで そんなに つよいの?{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_JoshuaDefeat) > 0x13
	.error "Route110_TrickHousePuzzle7_Text_JoshuaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_JoshuaDefeat) < 0x13
	.space 0x13 - (. - Route110_TrickHousePuzzle7_Text_JoshuaDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:326 Route110_TrickHousePuzzle7_Text_JoshuaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHousePuzzle7_Text_JoshuaPostBattle
Route110_TrickHousePuzzle7_Text_JoshuaPostBattle: @ 0x082402BC
	.string "ぼくも じゆう じざいに\nきえたり あらわれたり してみたいな{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_JoshuaPostBattle) != 0x20
	.error "Route110_TrickHousePuzzle7_Text_JoshuaPostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_2402D7
	.set gText_Rom_2402D7, Route110_TrickHousePuzzle7_Text_JoshuaPostBattle + 0x1b
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:329 Route110_TrickHousePuzzle7_Text_PatriciaIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_PatriciaIntro
Route110_TrickHousePuzzle7_Text_PatriciaIntro: @ 0x082402DC
	.string "おなじところを つづけて\nなんども まわると ふきつなのよ……{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_PatriciaIntro) > 0x20
	.error "Route110_TrickHousePuzzle7_Text_PatriciaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_PatriciaIntro) < 0x20
	.space 0x20 - (. - Route110_TrickHousePuzzle7_Text_PatriciaIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:332 Route110_TrickHousePuzzle7_Text_PatriciaDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_PatriciaDefeat
Route110_TrickHousePuzzle7_Text_PatriciaDefeat: @ 0x082402FC
	.string "まけた……!\nえんぎが わるいわ……!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_PatriciaDefeat) > 0x14
	.error "Route110_TrickHousePuzzle7_Text_PatriciaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_PatriciaDefeat) < 0x14
	.space 0x14 - (. - Route110_TrickHousePuzzle7_Text_PatriciaDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:335 Route110_TrickHousePuzzle7_Text_PatriciaPostBattle
	.globl Route110_TrickHousePuzzle7_Text_PatriciaPostBattle
Route110_TrickHousePuzzle7_Text_PatriciaPostBattle: @ 0x08240310
	.string "わたしは もう 10かい いじょう\nまわってしまった…… ふきつだわ……{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_PatriciaPostBattle) > 0x25
	.error "Route110_TrickHousePuzzle7_Text_PatriciaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_PatriciaPostBattle) < 0x25
	.space 0x25 - (. - Route110_TrickHousePuzzle7_Text_PatriciaPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:338 Route110_TrickHousePuzzle7_Text_AlexisIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_AlexisIntro
Route110_TrickHousePuzzle7_Text_AlexisIntro: @ 0x08240335
	.string "かった ほうが さきに このしかけを\nぬけられる よかんが するわ!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_AlexisIntro) > 0x23
	.error "Route110_TrickHousePuzzle7_Text_AlexisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_AlexisIntro) < 0x23
	.space 0x23 - (. - Route110_TrickHousePuzzle7_Text_AlexisIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:341 Route110_TrickHousePuzzle7_Text_AlexisDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_AlexisDefeat
Route110_TrickHousePuzzle7_Text_AlexisDefeat: @ 0x08240358
	.string "あら!\nじゃあ おさきに どうぞ!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_AlexisDefeat) > 0x12
	.error "Route110_TrickHousePuzzle7_Text_AlexisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_AlexisDefeat) < 0x12
	.space 0x12 - (. - Route110_TrickHousePuzzle7_Text_AlexisDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:344 Route110_TrickHousePuzzle7_Text_AlexisPostBattle
	.globl Route110_TrickHousePuzzle7_Text_AlexisPostBattle
Route110_TrickHousePuzzle7_Text_AlexisPostBattle: @ 0x0824036A
	.string "あなたは カラクリやしきの しかけを\nすべて とく って よかんが するわ!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_AlexisPostBattle) > 0x27
	.error "Route110_TrickHousePuzzle7_Text_AlexisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_AlexisPostBattle) < 0x27
	.space 0x27 - (. - Route110_TrickHousePuzzle7_Text_AlexisPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:347 Route110_TrickHousePuzzle7_Text_MarielaIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_MarielaIntro
Route110_TrickHousePuzzle7_Text_MarielaIntro: @ 0x08240391
	.string "んっふっふっふ きたわねっ\nさあ しょうぶよ!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_MarielaIntro) > 0x18
	.error "Route110_TrickHousePuzzle7_Text_MarielaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_MarielaIntro) < 0x18
	.space 0x18 - (. - Route110_TrickHousePuzzle7_Text_MarielaIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:350 Route110_TrickHousePuzzle7_Text_MarielaDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_MarielaDefeat
Route110_TrickHousePuzzle7_Text_MarielaDefeat: @ 0x082403A9
	.string "あっさり かってくれちゃって!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_MarielaDefeat) > 0x10
	.error "Route110_TrickHousePuzzle7_Text_MarielaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_MarielaDefeat) < 0x10
	.space 0x10 - (. - Route110_TrickHousePuzzle7_Text_MarielaDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:353 Route110_TrickHousePuzzle7_Text_MarielaPostBattle
	.globl Route110_TrickHousePuzzle7_Text_MarielaPostBattle
Route110_TrickHousePuzzle7_Text_MarielaPostBattle: @ 0x082403B9
	.string "ふん べつに くやしく ないから!\nわたし!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_MarielaPostBattle) > 0x17
	.error "Route110_TrickHousePuzzle7_Text_MarielaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_MarielaPostBattle) < 0x17
	.space 0x17 - (. - Route110_TrickHousePuzzle7_Text_MarielaPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:356 Route110_TrickHousePuzzle7_Text_AlvaroIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_AlvaroIntro
Route110_TrickHousePuzzle7_Text_AlvaroIntro: @ 0x082403D0
	.string "きみが どんどん\nちかづいて くるのを みていたぜ!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_AlvaroIntro) > 0x1b
	.error "Route110_TrickHousePuzzle7_Text_AlvaroIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_AlvaroIntro) < 0x1b
	.space 0x1b - (. - Route110_TrickHousePuzzle7_Text_AlvaroIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:359 Route110_TrickHousePuzzle7_Text_AlvaroDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHousePuzzle7_Text_AlvaroDefeat
Route110_TrickHousePuzzle7_Text_AlvaroDefeat: @ 0x082403EB
	.string "こんな けっかは\nみえなかった{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_AlvaroDefeat) != 0x10
	.error "Route110_TrickHousePuzzle7_Text_AlvaroDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_2403F6
	.set gText_Rom_2403F6, Route110_TrickHousePuzzle7_Text_AlvaroDefeat + 0xb
	.globl gText_Rom_2403F7
	.set gText_Rom_2403F7, Route110_TrickHousePuzzle7_Text_AlvaroDefeat + 0xc
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:362 Route110_TrickHousePuzzle7_Text_AlvaroPostBattle
	.globl Route110_TrickHousePuzzle7_Text_AlvaroPostBattle
Route110_TrickHousePuzzle7_Text_AlvaroPostBattle: @ 0x082403FB
	.string "ま こんな ところで あったんだ\nものずき どうし おたがい がんばろうぜ!{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_AlvaroPostBattle) > 0x27
	.error "Route110_TrickHousePuzzle7_Text_AlvaroPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_AlvaroPostBattle) < 0x27
	.space 0x27 - (. - Route110_TrickHousePuzzle7_Text_AlvaroPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:365 Route110_TrickHousePuzzle7_Text_EverettIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle7_Text_EverettIntro
Route110_TrickHousePuzzle7_Text_EverettIntro: @ 0x08240422
	.string "せ せまいな……\nここは……{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_EverettIntro) > 0xf
	.error "Route110_TrickHousePuzzle7_Text_EverettIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_EverettIntro) < 0xf
	.space 0xf - (. - Route110_TrickHousePuzzle7_Text_EverettIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:368 Route110_TrickHousePuzzle7_Text_EverettDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHousePuzzle7_Text_EverettDefeat
Route110_TrickHousePuzzle7_Text_EverettDefeat: @ 0x08240431
	.string "おお つよいつよい{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_EverettDefeat) != 0xa
	.error "Route110_TrickHousePuzzle7_Text_EverettDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_240437
	.set gText_Rom_240437, Route110_TrickHousePuzzle7_Text_EverettDefeat + 0x6
	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:371 Route110_TrickHousePuzzle7_Text_EverettPostBattle
	.globl Route110_TrickHousePuzzle7_Text_EverettPostBattle
Route110_TrickHousePuzzle7_Text_EverettPostBattle: @ 0x0824043B
	.string "もし かったら いれかわって やれと\nおもって いたんだけどね{EOS}"
	.if (. - Route110_TrickHousePuzzle7_Text_EverettPostBattle) > 0x20
	.error "Route110_TrickHousePuzzle7_Text_EverettPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle7_Text_EverettPostBattle) < 0x20
	.space 0x20 - (. - Route110_TrickHousePuzzle7_Text_EverettPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x24045B, size 0x63
	.byte 0x00, 0x69, 0x21, 0xB2, 0x40, 0x00, 0x00, 0x06, 0x01, 0x6E, 0x04, 0x24, 0x08, 0x05, 0xAC, 0xD1
	.byte 0x23, 0x08, 0x02, 0x16, 0xB2, 0x40, 0x01, 0x00, 0x05, 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00
	.byte 0x4C, 0x00, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle8_Text_VincentIntro
	.4byte Route110_TrickHousePuzzle8_Text_VincentDefeat
	.byte 0x0F, 0x00, 0x33, 0x05
	.byte 0x24, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x5D, 0x00, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle8_Text_KeiraIntro
	.byte 0x73
	.byte 0x05, 0x24, 0x08, 0x0F, 0x00, 0x86, 0x05, 0x24, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x4D, 0x00
	.byte 0x00, 0x00
	.4byte Route110_TrickHousePuzzle8_Text_LeroyIntro
	.4byte Route110_TrickHousePuzzle8_Text_LeroyDefeat
	.byte 0x0F, 0x00, 0xDC, 0x05, 0x24, 0x08
	.byte 0x09, 0x06, 0x02
