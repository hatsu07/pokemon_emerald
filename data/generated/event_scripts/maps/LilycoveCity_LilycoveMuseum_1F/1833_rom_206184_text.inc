	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:161 LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum
	.globl LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum
LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum: @ 0x08205D75
	.string "ミナモ びじゅつかん へ ようこそ!\pポケモンたちを えがいた\nすばらしい めいがの かずかずを\lゆっくり ごらんに なって くださいね!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum) > 0x46
	.error "LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum) < 0x46
	.space 0x46 - (. - LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:164 LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	.globl LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings: @ 0x08205DBB
	.string "わたしは この びじゅつかんの\nかんちょう です!\pあなたは おわかいのに びじゅつかんに\nいらっしゃる とは かんしん ですね!\pもう えは ごらんに なりましたか?{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings) > 0x55
	.error "LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings) < 0x55
	.space 0x55 - (. - LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:167 LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime
	.globl LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime
LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime: @ 0x08205E10
	.string "では おじゃま いたしません から\nゆっくり みていって ください!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime) > 0x23
	.error "LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime) < 0x23
	.space 0x23 - (. - LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:170 LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings
	.globl LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings
LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings: @ 0x08205E33
	.string "おや? あなたは\nポケモントレーナーさん みたい ですね\pえにも きょうみが おあり ですか?{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings) > 0x30
	.error "LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings) < 0x30
	.space 0x30 - (. - LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:173 LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat
LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat: @ 0x08205E63
	.string "そうですか……\pそれなのに わざわざ おいで くださって\nこうえい ですよ{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat) != 0x26
	.error "LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat must retain its original byte length"
	.endif
	.globl gText_Rom_205E85
	.set gText_Rom_205E85, LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat + 0x22
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:176 LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe
	.globl LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe
LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe: @ 0x08205E89
	.string "そうですか! えが おすき ですか!\pでは ちょっと わたしに\nついてきて ください ませんか?{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe) > 0x31
	.error "LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe) < 0x31
	.space 0x31 - (. - LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:179 LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting
	.globl LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting
LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting: @ 0x08205EBA
	.string "むかしの ひとが かいた えだ!\nところどころ えのぐが はがれてる{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting) > 0x23
	.error "LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting) < 0x23
	.space 0x23 - (. - LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:182 LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery
LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery: @ 0x08205EDD
	.string "みたことも ないような ふしぎな\nけしきが えがかれている{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery) != 0x1e
	.error "LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery must retain its original byte length"
	.endif
	.globl gText_Rom_205EF7
	.set gText_Rom_205EF7, LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery + 0x1a
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:185 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman: @ 0x08205EFB
	.string "ひざに ポケモンを のせて ほほえむ\nうつくしい じょせいが えがかれている{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman) != 0x27
	.error "LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman must retain its original byte length"
	.endif
	.globl gText_Rom_205F1E
	.set gText_Rom_205F1E, LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman + 0x23
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:188 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon
	.globl LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon: @ 0x08205F22
	.string "むかしの ひとが そうぞうで かいた\nでんせつの ポケモンの えだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon) > 0x23
	.error "LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon) < 0x23
	.space 0x23 - (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:191 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon: @ 0x08205F45
	.string "かぜに なびいて きもち よさそうに\nゆれている くさポケモンが えがかれている{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon) != 0x29
	.error "LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon must retain its original byte length"
	.endif
	.globl gText_Rom_205F6A
	.set gText_Rom_205F6A, LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon + 0x25
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:194 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries
	.globl LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries: @ 0x08205F6E
	.string "おいしそうな きのみが えがかれている\nおなかが すいて きそう!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries) > 0x22
	.error "LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries) < 0x22
	.space 0x22 - (. - LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:197 LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica
	.globl LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica
LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica: @ 0x08205F90
	.string "こだいの とりポケモンを ほった\nゆうめいな ちょうこくの レプリカだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica) > 0x25
	.error "LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica) < 0x25
	.space 0x25 - (. - LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:200 LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone
LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone: @ 0x08205FB5
	.string "くろい いしで つくられた\nおおきい モンスターボールだ!\lむかし おまつりに つかって いたらしい{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone) != 0x33
	.error "LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone must retain its original byte length"
	.endif
	.globl gText_Rom_205FE4
	.set gText_Rom_205FE4, LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone + 0x2f
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:203 LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText
	.globl LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText
LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText: @ 0x08205FE8
	.string "ポケモンの すがたと しらない もじが\nこまかく ほられてある せきばんだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText) > 0x27
	.error "LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText) < 0x27
	.space 0x27 - (. - LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:206 LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence
	.globl gText_Rom_20600F
gText_Rom_20600F: @ 0x0820600F
	.string "うーん すばらしい さくひんだ……{EOS}"
	.if (. - gText_Rom_20600F) > 0x12
	.error "gText_Rom_20600F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20600F) < 0x12
	.space 0x12 - (. - gText_Rom_20600F)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:209 LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts
	.globl LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts
LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts: @ 0x08206021
	.string "ポケモン しょうぶも いいけど\pげいじゅつを あいする きもちも\nわすれずに いないとね!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts) > 0x2e
	.error "LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts) < 0x2e
	.space 0x2e - (. - LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:212 LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration
	.globl LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration
LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration: @ 0x0820604F
	.string "この びじゅつかんは\nすごい えが たくさん みられるし\lかんちょうも すばらしい ひとだし\lぼくたち がかの あいだ でも\lあこがれの ばしょ なんだよ{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration) > 0x4e
	.error "LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration) < 0x4e
	.space 0x4e - (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:215 LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty
	.globl LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty
LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty: @ 0x0820609D
	.string "この おんなの ひと きれーい!\nママみたーい!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty) > 0x19
	.error "LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty) < 0x19
	.space 0x19 - (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:218 LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable
	.globl LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable
LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable: @ 0x082060B6
	.string "この ポケモン かわいいわ!\nうちの ぼうや みたい!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable) > 0x1c
	.error "LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable) < 0x1c
	.space 0x1c - (. - LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:221 LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings
	.globl LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings
LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings: @ 0x082060D2
	.string "この びじゅつかんに あたらしい えが\nはいったって きいたから\lさっそく みにきて みたの!\pあたらしい えは 2かい かな?{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings) > 0x41
	.error "LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings) < 0x41
	.space 0x41 - (. - LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:224 LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful
	.globl LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful
LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful: @ 0x08206113
	.string "さいきん かんちょうの ごきげんが\nとても いいみたい\pいいこと あったんだね きっと{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful) > 0x2c
	.error "LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful) < 0x2c
	.space 0x2c - (. - LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:227 LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings
	.globl LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings
LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings: @ 0x0820613F
	.string "ここで いい えを たくさん みて\nべんきょう しないとな!\pここに いつか じぶんの さくひんを\nかざって もらうのが ゆめ なんだ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings) > 0x45
	.error "LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings) < 0x45
	.space 0x45 - (. - LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings)
	.endif
	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:230 LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination
	.globl LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination
LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination: @ 0x08206184
	.string "この びじゅつかんも すっかり ミナモの\n……いや ホウエンちほうの\lかんこう めいしょに なったねえ!\pきいた はなしだと\nひとりの トレーナーが 2かいの えを\lそろえて くれた らしいよ!{EOS}"
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination) > 0x62
	.error "LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination) < 0x62
	.space 0x62 - (. - LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination)
	.endif
	@ analyzed canonical ROM range 0x082061E6-0x08206496
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LilycoveCity_LilycoveMuseum_2F_OnLoad_OnFrame: @ 0x082061E6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_082061F1
	.byte 0x02
	.4byte gMapScriptConditionTable_LilycoveCity_LilycoveMuseum_2F_OnFrame
	.byte 0
EventScript_JP_082061F1: @ 0x082061F1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A0
	goto_if 0x01, EventScript_JP_08206237
	goto EventScript_JP_08206200
	.byte 0x02
EventScript_JP_08206200: @ 0x08206200
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A1
	goto_if 0x01, EventScript_JP_0820624F
	goto EventScript_JP_0820620F
	.byte 0x02
EventScript_JP_0820620F: @ 0x0820620F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A2
	goto_if 0x01, EventScript_JP_08206267
	goto EventScript_JP_0820621E
	.byte 0x02
EventScript_JP_0820621E: @ 0x0820621E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00A3
	goto_if 0x01, EventScript_JP_0820627F
	goto EventScript_JP_0820622D
	.byte 0x02
EventScript_JP_0820622D: @ 0x0820622D
	checkflag 0x00A4
	goto_if 0x01, EventScript_JP_08206297
	end
EventScript_JP_08206237: @ 0x08206237
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x000A, 0x0006, 0x025E, 0x0001
	setmetatile 0x000B, 0x0006, 0x025F, 0x0001
	goto EventScript_JP_08206200
	.byte 0x02
EventScript_JP_0820624F: @ 0x0820624F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x0012, 0x0006, 0x025C, 0x0001
	setmetatile 0x0013, 0x0006, 0x025D, 0x0001
	goto EventScript_JP_0820620F
	.byte 0x02
EventScript_JP_08206267: @ 0x08206267
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x000E, 0x000A, 0x0260, 0x0001
	setmetatile 0x000F, 0x000A, 0x0261, 0x0001
	goto EventScript_JP_0820621E
	.byte 0x02
EventScript_JP_0820627F: @ 0x0820627F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setmetatile 0x0006, 0x000A, 0x025A, 0x0001
	setmetatile 0x0007, 0x000A, 0x025B, 0x0001
	goto EventScript_JP_0820622D
	.byte 0x02
EventScript_JP_08206297: @ 0x08206297
	setmetatile 0x0002, 0x0006, 0x0262, 0x0001
	setmetatile 0x0003, 0x0006, 0x0263, 0x0001
	end
gMapScriptConditionTable_LilycoveCity_LilycoveMuseum_2F_OnFrame: @ 0x082062AA
	@ conditional map script table
	.2byte 0x4094, 0x0000
	.4byte EventScript_JP_082062B4
	.2byte 0
EventScript_JP_082062B4: @ 0x082062B4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_1F_Movement_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall
	callstd 0x03
	@ event command: applymovement
	applymovement 0x0001, LilycoveCity_LilycoveMuseum_1F_Movement_FaceUp_Delay16
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_1F_Movement_FaceUp_Delay16
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall
	callstd 0x03
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_LilycoveMuseum_1F_Movement_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit
	callstd 0x03
	copyvar 0x4094, 0x0001
	releaseall
	end
LilycoveCity_LilycoveMuseum_1F_Movement_WalkInPlaceFastestLeft: @ 0x0820630D
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
LilycoveCity_LilycoveMuseum_1F_Movement_FaceUp_Delay16: @ 0x0820630F
	@ object movement sequence
	face_up
	delay_16
	step_end
.globl EventScript_JP_08206312
EventScript_JP_08206312: @ 0x08206312
	lockall
	checkflag 0x00EC
	goto_if 0x01, EventScript_JP_082063CD
	specialvar_ 0x8004, 0x0089
	copyvar 0x8000, 0x8004
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08206366
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0820636F
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit
	callstd 0x02
	end
EventScript_JP_08206366: @ 0x08206366
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting
	callstd 0x02
	end
EventScript_JP_0820636F: @ 0x0820636F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, LilycoveCity_LilycoveMuseum_1F_Movement_FaceUp_Delay16
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests
	callstd 0x04
	goto EventScript_JP_08206396
	.byte 0x02
EventScript_JP_08206396: @ 0x08206396
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude
	callstd 0x04
	setorcopyvar 0x8000, 0x002C
	callstd 0x07
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082063BD
	setflag 0x00EC
	closemessage
	releaseall
	end
EventScript_JP_082063BD: @ 0x082063BD
	call 0x082430FD
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou
	callstd 0x04
	closemessage
	releaseall
	end
EventScript_JP_082063CD: @ 0x082063CD
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit
	callstd 0x02
	releaseall
	end
.globl EventScript_JP_082063D7
EventScript_JP_082063D7: @ 0x082063D7
	lockall
	checkflag 0x00A2
	goto_if 0x01, EventScript_JP_0820646D
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame
	callstd 0x03
	end
.globl EventScript_JP_082063EA
EventScript_JP_082063EA: @ 0x082063EA
	lockall
	checkflag 0x00A4
	goto_if 0x01, EventScript_JP_08206489
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame
	callstd 0x03
	end
.globl EventScript_JP_082063FD
EventScript_JP_082063FD: @ 0x082063FD
	lockall
	checkflag 0x00A0
	goto_if 0x01, EventScript_JP_08206451
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame
	callstd 0x03
	end
.globl EventScript_JP_08206410
EventScript_JP_08206410: @ 0x08206410
	lockall
	checkflag 0x00A1
	goto_if 0x01, EventScript_JP_0820645F
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame
	callstd 0x03
	end
.globl EventScript_JP_08206423
EventScript_JP_08206423: @ 0x08206423
	lockall
	checkflag 0x00A3
	goto_if 0x01, EventScript_JP_0820647B
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame
	callstd 0x03
	end
.globl EventScript_JP_08206436
EventScript_JP_08206436: @ 0x08206436
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe
	callstd 0x02
	end
.globl EventScript_JP_0820643F
EventScript_JP_0820643F: @ 0x0820643F
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing
	callstd 0x02
	end
.globl EventScript_JP_08206448
EventScript_JP_08206448: @ 0x08206448
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon
	callstd 0x02
	end
EventScript_JP_08206451: @ 0x08206451
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x09
	releaseall
	end
EventScript_JP_0820645F: @ 0x0820645F
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0A
	releaseall
	end
EventScript_JP_0820646D: @ 0x0820646D
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0B
	releaseall
	end
EventScript_JP_0820647B: @ 0x0820647B
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0C
	releaseall
	end
EventScript_JP_08206489: @ 0x08206489
	loadword 0x00, LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	callstd 0x03
	fadescreen 0x01
	drawcontestwinner 0x0D
	releaseall
	end
