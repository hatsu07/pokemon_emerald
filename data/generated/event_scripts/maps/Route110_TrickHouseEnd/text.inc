	@ data/maps/Route110_TrickHouseEnd/scripts.inc:250 Route110_TrickHouseEnd_Text_YouveMadeItToMe
	.globl Route110_TrickHouseEnd_Text_YouveMadeItToMe
Route110_TrickHouseEnd_Text_YouveMadeItToMe: @ 0x0823DA9E
	.string "あっ!\nあんた ここまで こられたのか!\lうーむ…… できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_YouveMadeItToMe) > 0x20
	.error "Route110_TrickHouseEnd_Text_YouveMadeItToMe may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_YouveMadeItToMe) < 0x20
	.space 0x20 - (. - Route110_TrickHouseEnd_Text_YouveMadeItToMe)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:253 Route110_TrickHouseEnd_Text_AllNightToPlantTrees
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToPlantTrees
Route110_TrickHouseEnd_Text_AllNightToPlantTrees: @ 0x0823DABE
	.string "てつやで きを うえたのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎの つぎ くらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToPlantTrees) != 0x37
	.error "Route110_TrickHouseEnd_Text_AllNightToPlantTrees must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:256 Route110_TrickHouseEnd_Text_AllNightToMakeMaze
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToMakeMaze
Route110_TrickHouseEnd_Text_AllNightToMakeMaze: @ 0x0823DAF5
	.string "てつやで めいろを つくったのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎ くらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToMakeMaze) != 0x36
	.error "Route110_TrickHouseEnd_Text_AllNightToMakeMaze must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:259 Route110_TrickHouseEnd_Text_AllNightToPreparePanels
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToPreparePanels
Route110_TrickHouseEnd_Text_AllNightToPreparePanels: @ 0x0823DB2B
	.string "てつやで ふすまを はりかえたのに……\pわがはいの つぎの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToPreparePanels) != 0x33
	.error "Route110_TrickHouseEnd_Text_AllNightToPreparePanels must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:262 Route110_TrickHouseEnd_Text_AllNightToShoveBoulders
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToShoveBoulders
Route110_TrickHouseEnd_Text_AllNightToShoveBoulders: @ 0x0823DB5E
	.string "てつやで いわを おして きたのに……\pわがはいの つぎの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToShoveBoulders) != 0x2f
	.error "Route110_TrickHouseEnd_Text_AllNightToShoveBoulders must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:265 Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls
Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls: @ 0x0823DB8D
	.string "てつやで にんぎょう つくって\nてつやで クイズも かんがえたのに……\pわがはいの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls) != 0x3b
	.error "Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:268 Route110_TrickHouseEnd_Text_AllNightToInstallDoors
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightToInstallDoors
Route110_TrickHouseEnd_Text_AllNightToInstallDoors: @ 0x0823DBC8
	.string "てつやで とびらを とりつけたのに……\pわがはいの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightToInstallDoors) != 0x27
	.error "Route110_TrickHouseEnd_Text_AllNightToInstallDoors must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:271 Route110_TrickHouseEnd_Text_AllNightSettingUpArrows
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEnd_Text_AllNightSettingUpArrows
Route110_TrickHouseEnd_Text_AllNightSettingUpArrows: @ 0x0823DBEF
	.string "てつやで やじるしを ならべたのに……\pわがはいと おなじ くらい すごい!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightSettingUpArrows) != 0x27
	.error "Route110_TrickHouseEnd_Text_AllNightSettingUpArrows must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:274 Route110_TrickHouseEnd_Text_AllNightPolishingFloors
	.globl Route110_TrickHouseEnd_Text_AllNightPolishingFloors
Route110_TrickHouseEnd_Text_AllNightPolishingFloors: @ 0x0823DC16
	.string "てつやで ゆかを みがいたのに……\pわがはい より すごい! のかも……"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_AllNightPolishingFloors) > 0x25
	.error "Route110_TrickHouseEnd_Text_AllNightPolishingFloors may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_AllNightPolishingFloors) < 0x25
	.space 0x25 - (. - Route110_TrickHouseEnd_Text_AllNightPolishingFloors)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:277 Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry
	.globl Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry
Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry: @ 0x0823DC3B
	.string "ど どうしよう……\nもう カラクリの ネタが\lつきて しまった……\lまた ぜんこく かくちを まわって\lしかけを いろいろ かんがえて くるか……"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry) > 0x4a
	.error "Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry) < 0x4a
	.space 0x4a - (. - Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:280 Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent
	.globl Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent
Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent: @ 0x0823DC85
	.string "みとめたくは ないんだが\nあんたには まけた……!\pまあ なんども きてくれた あたり\nよっぽど わがはいに\lみりょくを かんじたの だろうけどな\pそのことと わがはいが まけたこととは\nかんけいなし!\pそうだ! あんたと わがはいの\nゆうじょうを きねんして\lいいものを プレゼント しよう!\p「あかいテント」と「あおいテント」\nふたつ あるんだが どっちが ほしい?"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent) > 0xba
	.error "Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent) < 0xba
	.space 0xba - (. - Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:283 Route110_TrickHouseEnd_Text_NoRoomInPC
	.globl Route110_TrickHouseEnd_Text_NoRoomInPC
Route110_TrickHouseEnd_Text_NoRoomInPC: @ 0x0823DD3F
	.string "なに パソコンに はいりきらない?\nそんなの わがはいが しるか!\p……と いいたい ところだけど\nわがはいは やさしいので あとで やろう!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_NoRoomInPC) > 0x48
	.error "Route110_TrickHouseEnd_Text_NoRoomInPC may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_NoRoomInPC) < 0x48
	.space 0x48 - (. - Route110_TrickHouseEnd_Text_NoRoomInPC)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:286 Route110_TrickHouseEnd_Text_LeavingOnJourney
	.globl Route110_TrickHouseEnd_Text_LeavingOnJourney
Route110_TrickHouseEnd_Text_LeavingOnJourney: @ 0x0823DD87
	.string "…… …… ……\pわがはいは これから\nあらたな しかけを もとめて\lたびに でる ことに する……\lあんたも いつか ここにきて\lまた あそんで いってくれ!\pそれでは さらば…!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_LeavingOnJourney) > 0x5c
	.error "Route110_TrickHouseEnd_Text_LeavingOnJourney may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_LeavingOnJourney) < 0x5c
	.space 0x5c - (. - Route110_TrickHouseEnd_Text_LeavingOnJourney)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:289 Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward
	.globl Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward
Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward: @ 0x0823DDE3
	.string "よしっ あんたに\nほうびを やろう!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward) > 0x13
	.error "Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward) < 0x13
	.space 0x13 - (. - Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:292 Route110_TrickHouseEnd_Text_NoRoomForThis
	.globl Route110_TrickHouseEnd_Text_NoRoomForThis
Route110_TrickHouseEnd_Text_NoRoomForThis: @ 0x0823DDF6
	.string "なにっ もちきれない?\nそんなに なにを もちあるいてるんだ?\lまあ せっかく ここまで こられたんだし\lほうびは あとで やろう!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_NoRoomForThis) > 0x43
	.error "Route110_TrickHouseEnd_Text_NoRoomForThis may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_NoRoomForThis) < 0x43
	.space 0x43 - (. - Route110_TrickHouseEnd_Text_NoRoomForThis)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:295 Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou
	.globl Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou
Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou: @ 0x0823DE39
	.string "なんだ とくいそうな かお してからに\nわがはいに かった きに なるのは\lまだ はやいわ!\lこのあとも また しかけを つくるから\lそれが おわってから わがはいを わらえ!\pそれでは じかいを おたのしみに!"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou) > 0x6b
	.error "Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou) < 0x6b
	.space 0x6b - (. - Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:298 Route110_TrickHouseEnd_Text_YoureIgnoringMe
	.globl Route110_TrickHouseEnd_Text_YoureIgnoringMe
Route110_TrickHouseEnd_Text_YoureIgnoringMe: @ 0x0823DEA4
	.string "おいおい\nわがはいの ことは むし か!\lずいぶん さみしい じゃないか"
	.byte EOS
	.if (. - Route110_TrickHouseEnd_Text_YoureIgnoringMe) > 0x25
	.error "Route110_TrickHouseEnd_Text_YoureIgnoringMe may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEnd_Text_YoureIgnoringMe) < 0x25
	.space 0x25 - (. - Route110_TrickHouseEnd_Text_YoureIgnoringMe)
	.endif
	@ Embedded ROM bytes: file offset 0x23DEC9, size 0x8A
	.byte 0x03, 0xCF, 0xDE, 0x23, 0x08, 0x00, 0x16, 0xB5, 0x40, 0x01, 0x00, 0x02, 0x01, 0xDB, 0xDE, 0x23
	.byte 0x08, 0x00, 0x21, 0xAB, 0x40, 0x02, 0x00, 0x06, 0x01, 0xE7, 0xDE, 0x23, 0x08, 0x02, 0xA2, 0x0D
	.byte 0x00, 0x01, 0x00, 0x0B, 0x02, 0x00, 0x00, 0x02, 0x69, 0x21, 0xAB, 0x40, 0x00, 0x00, 0x06, 0x01
	.byte 0x03, 0xDF, 0x23, 0x08, 0x05, 0xAC, 0xD1, 0x23, 0x08, 0x02, 0x16, 0xAB, 0x40, 0x01, 0x00, 0x05
	.byte 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00, 0x63, 0x02, 0x00, 0x00, 0x95, 0xDF, 0x23, 0x08, 0xB8
	.byte 0xDF, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHousePuzzle1_Text_SallyPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x4C, 0x01
	.byte 0x00, 0x00
	.4byte Route110_TrickHousePuzzle1_Text_EddieIntro
	.4byte Route110_TrickHousePuzzle1_Text_EddieDefeat
	.byte 0x0F, 0x00
	.4byte Route110_TrickHousePuzzle1_Text_EddiePostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x64, 0x02, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle1_Text_RobinIntro
	.4byte Route110_TrickHousePuzzle1_Text_RobinDefeat
	.byte 0x0F, 0x00, 0x3B, 0xE0, 0x23, 0x08, 0x09, 0x06, 0x02
