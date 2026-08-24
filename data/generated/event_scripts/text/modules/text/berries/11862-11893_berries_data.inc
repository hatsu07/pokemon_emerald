
	@ data/text/berries.inc:80 LilycoveCity_Text_BecauseYoureTrainer
	.globl LilycoveCity_Text_BecauseYoureTrainer
LilycoveCity_Text_BecauseYoureTrainer: @ 0x08263A9E
	.string "やっぱり それは…………\pきみが トレーナーだからだ!{EOS}"
	.if (. - LilycoveCity_Text_BecauseYoureTrainer) > 0x1c
	.error "LilycoveCity_Text_BecauseYoureTrainer may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_BecauseYoureTrainer) < 0x1c
	.space 0x1c - (. - LilycoveCity_Text_BecauseYoureTrainer)
	.endif

	@ data/text/berries.inc:84 LilycoveCity_Text_PokeblocksSuitPokemon
	.globl LilycoveCity_Text_PokeblocksSuitPokemon
LilycoveCity_Text_PokeblocksSuitPokemon: @ 0x08263ABA
	.string "やっぱり\pわたしに シンプルさが にあうように\nポケモンには ポロックが にあうな{EOS}"
	.if (. - LilycoveCity_Text_PokeblocksSuitPokemon) > 0x2a
	.error "LilycoveCity_Text_PokeblocksSuitPokemon may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_Text_PokeblocksSuitPokemon) < 0x2a
	.space 0x2a - (. - LilycoveCity_Text_PokeblocksSuitPokemon)
	.endif

	@ data/text/berries.inc:89 Route123_BerryMastersHouse_Text_YoureDeservingOfBerry
	.globl Route123_BerryMastersHouse_Text_YoureDeservingOfBerry
Route123_BerryMastersHouse_Text_YoureDeservingOfBerry: @ 0x08263AE4
	.string "わしは きのみめいじんと よばれておる\pわしは せかいじゅうを うつくしい はなで\nうめつくそうと きのみを そだてて\lそして くばり まくって おるのじゃ\pきみにも きのみを わけて あげよう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_YoureDeservingOfBerry) > 0x63
	.error "Route123_BerryMastersHouse_Text_YoureDeservingOfBerry may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_YoureDeservingOfBerry) < 0x63
	.space 0x63 - (. - Route123_BerryMastersHouse_Text_YoureDeservingOfBerry)
	.endif

	@ data/text/berries.inc:96 Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother
	.globl Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother
Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother: @ 0x08263B47
	.string "ほれ えんりょ せずに もう ひとつ!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother) > 0x14
	.error "Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother) < 0x14
	.space 0x14 - (. - Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother)
	.endif

	@ data/text/berries.inc:99 Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop
	.globl Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop
Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop: @ 0x08263B5B
	.string "カナズミの ちかくにある サン・トウカという\nフラワーショップも よろしくの\pせかいに はなを さかせましょう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop) > 0x39
	.error "Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop) < 0x39
	.space 0x39 - (. - Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop)
	.endif

	@ data/text/berries.inc:104 Route123_BerryMastersHouse_Text_DoneForToday
	.globl Route123_BerryMastersHouse_Text_DoneForToday
Route123_BerryMastersHouse_Text_DoneForToday: @ 0x08263B94
	.string "きょうは もう おしまいじゃ\nまた おいで\pせかいに はなを さかせましょう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_DoneForToday) > 0x28
	.error "Route123_BerryMastersHouse_Text_DoneForToday may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_DoneForToday) < 0x28
	.space 0x28 - (. - Route123_BerryMastersHouse_Text_DoneForToday)
	.endif

	@ data/text/berries.inc:109 Route123_BerryMastersHouse_Text_HeardAGoodSayingLately
	.globl Route123_BerryMastersHouse_Text_HeardAGoodSayingLately
Route123_BerryMastersHouse_Text_HeardAGoodSayingLately: @ 0x08263BBC
	.string "じいさんの きのみの そだてかたは\nそりゃあ せかいいちじゃ\pわしも はなが たかいわい\pところで あんた\nいい ことばを きいたことが ないかい?{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_HeardAGoodSayingLately) > 0x4b
	.error "Route123_BerryMastersHouse_Text_HeardAGoodSayingLately may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_HeardAGoodSayingLately) < 0x4b
	.space 0x4b - (. - Route123_BerryMastersHouse_Text_HeardAGoodSayingLately)
	.endif

	@ data/text/berries.inc:116 Route123_BerryMastersHouse_Text_InspirationalTakeThis
	.globl Route123_BerryMastersHouse_Text_InspirationalTakeThis
Route123_BerryMastersHouse_Text_InspirationalTakeThis: @ 0x08263C07
	.string "おお! とても よい ことばじゃ!\nかんどう したわい\pほれ これを もっていきなされ{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_InspirationalTakeThis) > 0x2c
	.error "Route123_BerryMastersHouse_Text_InspirationalTakeThis may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_InspirationalTakeThis) < 0x2c
	.space 0x2c - (. - Route123_BerryMastersHouse_Text_InspirationalTakeThis)
	.endif

	@ data/text/berries.inc:121 Route123_BerryMastersHouse_Text_GoodSayingTakeThis
	.globl Route123_BerryMastersHouse_Text_GoodSayingTakeThis
Route123_BerryMastersHouse_Text_GoodSayingTakeThis: @ 0x08263C33
	.string "おお! なかなか よい ことばじゃ\nあんたも たいしたもんじゃ\pほれ これを もっていきなされ{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_GoodSayingTakeThis) > 0x30
	.error "Route123_BerryMastersHouse_Text_GoodSayingTakeThis may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_GoodSayingTakeThis) < 0x30
	.space 0x30 - (. - Route123_BerryMastersHouse_Text_GoodSayingTakeThis)
	.endif

	@ data/text/berries.inc:126 Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife
	.globl Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife
Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife: @ 0x08263C63
	.string "まごたち 4にんも じいさんを しのぐ\nおおものに なるじゃろうて\pじんせい たのしいことが つきんのう!{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife) > 0x36
	.error "Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife) < 0x36
	.space 0x36 - (. - Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife)
	.endif

	@ data/text/berries.inc:131 Route123_BerryMastersHouse_Text_Ah
	.globl Route123_BerryMastersHouse_Text_Ah
Route123_BerryMastersHouse_Text_Ah: @ 0x08263C99
	.string "ほう……{EOS}"
	.if (. - Route123_BerryMastersHouse_Text_Ah) > 0x5
	.error "Route123_BerryMastersHouse_Text_Ah may not grow beyond its original slot"
	.endif
	.if (. - Route123_BerryMastersHouse_Text_Ah) < 0x5
	.space 0x5 - (. - Route123_BerryMastersHouse_Text_Ah)
	.endif

	@ data/text/berries.inc:134 Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
	.globl Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop: @ 0x08263C9E
	.string "こんにちは!\pはなを せかいに ひろめる\nフラワーショップ サン・トウカです!{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop) > 0x28
	.error "Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop) < 0x28
	.space 0x28 - (. - Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop)
	.endif

	@ data/text/berries.inc:139 Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries
	.globl Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries
Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries: @ 0x08263CC6
	.string "{PLAYER}{KUN} きのみの こと しりたい?{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries) > 0x13
	.error "Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries) < 0x13
	.space 0x13 - (. - Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries)
	.endif

	@ data/text/berries.inc:142 Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries
	.globl Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries
Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries: @ 0x08263CD9
	.string "あなたの なまえは……\p{PLAYER}{KUN}ね!\nとっても いい なまえだね!\l{PLAYER}{KUN} きのみのこと しりたい?{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries) > 0x34
	.error "Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries) < 0x34
	.space 0x34 - (. - Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries)
	.endif

	@ data/text/berries.inc:148 Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
	.globl Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
Route104_PrettyPetalFlowerShop_Text_BerriesExplanation: @ 0x08263D0D
	.string "きのみはね くろい ふかふかの つちの\nところで たまに とれるの\lでね……\pとったら その1つを また うめるの!\pそうすると その きのみ から\nめがでて みきが できて はながさいて\lまた きのみ が できるの\pそうやって はなを ふやして\nせかいじゅうを はなに するのが\lわたしの ゆめ なんだ!\pだから {PLAYER}{KUN}も きのみを うめて\nせかいに はなを ふやしてね!{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_BerriesExplanation) > 0xbd
	.error "Route104_PrettyPetalFlowerShop_Text_BerriesExplanation may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_BerriesExplanation) < 0xbd
	.space 0xbd - (. - Route104_PrettyPetalFlowerShop_Text_BerriesExplanation)
	.endif

	@ data/text/berries.inc:162 Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
	.globl Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness
Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness: @ 0x08263DCA
	.string "おはなって とっても しあわせな きぶんに\nしてくれるよね{EOS}"
	.if (. - Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness) > 0x1e
	.error "Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness may not grow beyond its original slot"
	.endif
	.if (. - Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness) < 0x1e
	.space 0x1e - (. - Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness)
	.endif
