	@ data/maps/LilycoveCity_House3/scripts.inc:100 LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks
	.globl gText_Rom_20A1C2
gText_Rom_20A1C2: @ 0x0820A1C2
	.string "あら あら あら！ あなた わかいのに\nひとりたび? えらいわねえー！\lうちのこ たちにも みならわせたいわあ\pおばさんは ポロックめいじん！\nちょいと ほんきを だせば\lすごく いい ポロックを つくれるのよー！\pポロックめいじんの おばさんが\nいろいろと おしえてあげようか?{EOS}"
	.if (. - gText_Rom_20A1C2) > 0x8d
	.error "gText_Rom_20A1C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A1C2) < 0x8d
	.space 0x8d - (. - gText_Rom_20A1C2)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:103 LilycoveCity_House3_Text_OhAreYouSure
	.globl gText_Rom_20A24F
gText_Rom_20A24F: @ 0x0820A24F
	.string "あらあ そう?\nなんでも じぶん ひとりだけで\lがんばろうと しちゃ ダメよー！{EOS}"
	.if (. - gText_Rom_20A24F) > 0x29
	.error "gText_Rom_20A24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A24F) < 0x29
	.space 0x29 - (. - gText_Rom_20A24F)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:106 LilycoveCity_House3_Text_ExplainPokeblocks
	.globl gText_Rom_20A278
gText_Rom_20A278: @ 0x0820A278
	.string "あらあ すなおな いいコねえー！\nじゃ ちょっとながいけど ききなさいよ\pいい?\pポロックには なめらかさって もんが あるの\nポロックを みれば わかるでしょ?\lこの すうじが ひくいほど なめらかなの！\lここ まちがっちゃ ダメよ！\pなめらかさの すうじが ひくくて\nレベルが たかいのが いい ポロック！\lいい ポロックは たくさん\lポケモンが たべて くれるんだから！\pそれと いい?\pなめらかな ポロックが つくりたかったら\nけちらないで いろんな しゅるいの\lきのみで つくってみるのよ！\lまぜた きのみによって なめらかさが\lちがって くるんだから！\pそれと いい?\pなるべく おおぜいで つくったほうが\nなめらかな ポロックが できるのよ！\lだれでも いいから おねがいして\lいっしょに つくって もらいなさいよ！\pさてと このくらい おぼえて おけば\nあなたも いちにんまえに なれるわよ！\pだいすきな ポケモンと なめらか ポロック\nそして なかよし かぞくが いれば\lこのよは しあわせ！\lあなたも がんばりなさいな！{EOS}"
	.if (. - gText_Rom_20A278) > 0x1d7
	.error "gText_Rom_20A278 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A278) < 0x1d7
	.space 0x1d7 - (. - gText_Rom_20A278)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:109 LilycoveCity_House3_Text_HappyToHaveQuadruplets
	.globl gText_Rom_20A44F
gText_Rom_20A44F: @ 0x0820A44F
	.string "よつごが うまれた ときは\nすごく ビックリ したが\lみんなで なかよく あそんでいる すがたを\lみていると しあわせ きぶんに なるよ！{EOS}"
	.if (. - gText_Rom_20A44F) > 0x46
	.error "gText_Rom_20A44F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A44F) < 0x46
	.space 0x46 - (. - gText_Rom_20A44F)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:112 LilycoveCity_House3_Text_GoingToWinMultiBattles
	.globl gText_Rom_20A495
gText_Rom_20A495: @ 0x0820A495
	.string "マルチバトル してるけど\nぼくが かつに きまってるぜ！{EOS}"
	.if (. - gText_Rom_20A495) > 0x1d
	.error "gText_Rom_20A495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A495) < 0x1d
	.space 0x1d - (. - gText_Rom_20A495)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:115 LilycoveCity_House3_Text_LikeMixingAtRecordCorner
	.globl gText_Rom_20A4B2
gText_Rom_20A4B2: @ 0x0820A4B2
	.string "レコードコーナーで まぜまくる！\nって なにが まざってるんだ?{EOS}"
	.if (. - gText_Rom_20A4B2) > 0x21
	.error "gText_Rom_20A4B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A4B2) < 0x21
	.space 0x21 - (. - gText_Rom_20A4B2)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:118 LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender
	.globl gText_Rom_20A4D3
gText_Rom_20A4D3: @ 0x0820A4D3
	.string "きのみブレンダーで\nとびっきりの ポロック つくっちゃうぜ！{EOS}"
	.if (. - gText_Rom_20A4D3) > 0x1f
	.error "gText_Rom_20A4D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A4D3) < 0x1f
	.space 0x1f - (. - gText_Rom_20A4D3)
	.endif
	@ data/maps/LilycoveCity_House3/scripts.inc:121 LilycoveCity_House3_Text_GoingToEnterContest
	.globl gText_Rom_20A4F2
gText_Rom_20A4F2: @ 0x0820A4F2
	.string "ポケモンの たくましさ じまん したいから\nみんなで コンテスト してるんだ！{EOS}"
	.if (. - gText_Rom_20A4F2) > 0x28
	.error "gText_Rom_20A4F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A4F2) < 0x28
	.space 0x28 - (. - gText_Rom_20A4F2)
	.endif
	@ analyzed canonical ROM range 0x0820A51A-0x0820A52C
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820A51A: @ 0x0820A51A
	.byte 0x00
.globl EventScript_JP_0820A51B
EventScript_JP_0820A51B: @ 0x0820A51B
	loadword 0x00, gText_Rom_20A52D
	callstd 0x02
	end
.globl EventScript_JP_0820A524
EventScript_JP_0820A524: @ 0x0820A524
	loadword 0x00, gText_Rom_20A56C
	callstd 0x02
	end
