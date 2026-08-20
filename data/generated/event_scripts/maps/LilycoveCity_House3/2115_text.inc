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
