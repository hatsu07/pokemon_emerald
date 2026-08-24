	@ data/maps/MagmaHideout_4F/scripts.inc:127 MagmaHideout_4F_Text_Grunt11Intro (+1 aliases)
	.globl gText_Rom_21CA09
gText_Rom_21CA09: @ 0x0821CA09
	.string "オレも グラードンを みたいのに\nまだ シッポすら みせて もらえなくて\pイライラ してるんだ……\pあっ!\nグラードンのこと いっちゃった!"
	.byte EOS
	.if (. - gText_Rom_21CA09) > 0x47
	.error "gText_Rom_21CA09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA09) < 0x47
	.space 0x47 - (. - gText_Rom_21CA09)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:134 MagmaHideout_4F_Text_Grunt11Defeat (+1 aliases)
	.globl gText_Rom_21CA50
gText_Rom_21CA50: @ 0x0821CA50
	.string "やっぱり れいせいな きもちを\nうしなって いたら かてないな……"
	.byte EOS
	.if (. - gText_Rom_21CA50) > 0x22
	.error "gText_Rom_21CA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA50) < 0x22
	.space 0x22 - (. - gText_Rom_21CA50)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:138 MagmaHideout_4F_Text_Grunt11PostBattle
	.globl gText_Rom_21CA72
gText_Rom_21CA72: @ 0x0821CA72
	.string "そういえば グラードンには\nシッポなんて あるんだろうか……?"
	.byte EOS
	.if (. - gText_Rom_21CA72) > 0x20
	.error "gText_Rom_21CA72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA72) < 0x20
	.space 0x20 - (. - gText_Rom_21CA72)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:141 MagmaHideout_4F_Text_Grunt12Intro (+1 aliases)
	.globl gText_Rom_21CA92
gText_Rom_21CA92: @ 0x0821CA92
	.string "ふはは もうすぐ! もうすぐだ!\nオレたちの もくてきが じつげん する!"
	.byte EOS
	.if (. - gText_Rom_21CA92) > 0x26
	.error "gText_Rom_21CA92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA92) < 0x26
	.space 0x26 - (. - gText_Rom_21CA92)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:146 MagmaHideout_4F_Text_Grunt12Defeat (+1 aliases)
	.globl gText_Rom_21CAB8
gText_Rom_21CAB8: @ 0x0821CAB8
	.string "ぐうう ここまで きていながら!"
	.byte EOS
	.if (. - gText_Rom_21CAB8) > 0x11
	.error "gText_Rom_21CAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAB8) < 0x11
	.space 0x11 - (. - gText_Rom_21CAB8)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:150 MagmaHideout_4F_Text_Grunt12PostBattle
	.globl gText_Rom_21CAC9
gText_Rom_21CAC9: @ 0x0821CAC9
	.string "マツブサさまー!\nしんにゅうしゃが そっちにー!"
	.byte EOS
	.if (. - gText_Rom_21CAC9) > 0x19
	.error "gText_Rom_21CAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAC9) < 0x19
	.space 0x19 - (. - gText_Rom_21CAC9)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:154 MagmaHideout_4F_Text_Grunt13Intro (+1 aliases)
	.globl gText_Rom_21CAE2
gText_Rom_21CAE2: @ 0x0821CAE2
	.string "まだまだー!\nかんたんには おくへ いかせない!"
	.byte EOS
	.if (. - gText_Rom_21CAE2) > 0x19
	.error "gText_Rom_21CAE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAE2) < 0x19
	.space 0x19 - (. - gText_Rom_21CAE2)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:158 MagmaHideout_4F_Text_Grunt13Defeat (+1 aliases)
	.globl gText_Rom_21CAFB
gText_Rom_21CAFB: @ 0x0821CAFB
	.string "オレって たおすの かんたん だった?"
	.byte EOS
	.if (. - gText_Rom_21CAFB) > 0x14
	.error "gText_Rom_21CAFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAFB) < 0x14
	.space 0x14 - (. - gText_Rom_21CAFB)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:161 MagmaHideout_4F_Text_Grunt13PostBattle
	.globl gText_Rom_21CB0F
gText_Rom_21CB0F: @ 0x0821CB0F
	.string "も もう ひとしょうぶ…… がくっ"
	.byte EOS
	.if (. - gText_Rom_21CB0F) > 0x12
	.error "gText_Rom_21CB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB0F) < 0x12
	.space 0x12 - (. - gText_Rom_21CB0F)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:164 MagmaHideout_4F_Text_TabithaIntro (+1 aliases)
	.globl gText_Rom_21CB21
gText_Rom_21CB21: @ 0x0821CB21
	.string "ウヒョ!\nここまで きたんだから おしえて やろう\pそうさ このさきには\nグラードンが ねむって いるのさ!\pマツブサさまは たったいま\nグラードンの ところへ いった!\pもうすぐ ねむりから めをさますぞ!\nウヒョ! ウヒョヒョ!"
	.byte EOS
	.if (. - gText_Rom_21CB21) > 0x75
	.error "gText_Rom_21CB21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB21) < 0x75
	.space 0x75 - (. - gText_Rom_21CB21)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:174 MagmaHideout_4F_Text_TabithaDefeat (+1 aliases)
	.globl gText_Rom_21CB96
gText_Rom_21CB96: @ 0x0821CB96
	.string "やられちまったい…… ウヒョ"
	.byte EOS
	.if (. - gText_Rom_21CB96) > 0xf
	.error "gText_Rom_21CB96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB96) < 0xf
	.space 0xf - (. - gText_Rom_21CB96)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:178 MagmaHideout_4F_Text_TabithaPostBattle
	.globl gText_Rom_21CBA5
gText_Rom_21CBA5: @ 0x0821CBA5
	.string "……と こんな ぐあいに おまえと\nあそんで やっている あいだに\lマツブサさまが グラードンを…… ウヒョ"
	.byte EOS
	.if (. - gText_Rom_21CBA5) > 0x37
	.error "gText_Rom_21CBA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CBA5) < 0x37
	.space 0x37 - (. - gText_Rom_21CBA5)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:182 MagmaHideout_4F_Text_MaxieAwakenGroudon
	.globl gText_Rom_21CBDC
gText_Rom_21CBDC: @ 0x0821CBDC
	.string "マツブサ『マグマに ねむる グラードンよ\nなにをしても めざめなかった おまえが\lもとめて いたのは あいいろのたま……\pそうなんだろう?\pさあ ここに もってきて やったぞ\nこの かがやきで めを さませ!\pそして ほんとうの ちからを\nわたしに みせて おくれ!"
	.byte EOS
	.if (. - gText_Rom_21CBDC) > 0x86
	.error "gText_Rom_21CBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CBDC) < 0x86
	.space 0x86 - (. - gText_Rom_21CBDC)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:193 MagmaHideout_4F_Text_MaxieGroudonWhatsWrong
	.globl gText_Rom_21CC62
gText_Rom_21CC62: @ 0x0821CC62
	.string "マツブサ『……グラードン!\nいったい どうしたと いうんだ!?\pあいいろのたまでは だめだと いうのか?\pグラードンよ!\nどこへ きえて しまったんだ……"
	.byte EOS
	.if (. - gText_Rom_21CC62) > 0x4e
	.error "gText_Rom_21CC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CC62) < 0x4e
	.space 0x4e - (. - gText_Rom_21CC62)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:200 MagmaHideout_4F_Text_MaxieOhItWasYou
	.globl gText_Rom_21CCB0
gText_Rom_21CCB0: @ 0x0821CCB0
	.string "マツブサ『おまえか!\pあっちでも こっちでも ちょこちょこと\nうろつき まわって いたようだが\pなるほど おまえが なにか\nこざいくを していたんだな……!"
	.byte EOS
	.if (. - gText_Rom_21CCB0) > 0x4f
	.error "gText_Rom_21CCB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CCB0) < 0x4f
	.space 0x4f - (. - gText_Rom_21CCB0)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:207 MagmaHideout_4F_Text_MaxieDefeat (+1 aliases)
	.globl gText_Rom_21CCFF
gText_Rom_21CCFF: @ 0x0821CCFF
	.string "おまえは なぜ そんなに\nポケモンを うまく あつかえるのだ……"
	.byte EOS
	.if (. - gText_Rom_21CCFF) > 0x21
	.error "gText_Rom_21CCFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CCFF) < 0x21
	.space 0x21 - (. - gText_Rom_21CCFF)
	.endif
	@ data/maps/MagmaHideout_4F/scripts.inc:211 MagmaHideout_4F_Text_MaxieImGoingAfterGroudon
	.globl gText_Rom_21CD20
gText_Rom_21CD20: @ 0x0821CD20
	.string "マツブサ『グラードンが にげだしたの には\nなにか わけがある……\lそう いいたいの だろう?\p…… …… ……\n…… …… ……\pふん……\nそれぐらい わたしも わかっていたさ\pグラードンが いなくなって しまえば\nもう こんな やまに ようはない\pわたしは グラードンを おいかけるから\nおまえとも ここで おわかれだな!"
	.byte EOS
	.if (. - gText_Rom_21CD20) > 0xa4
	.error "gText_Rom_21CD20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CD20) < 0xa4
	.space 0xa4 - (. - gText_Rom_21CD20)
	.endif
	@ Embedded ROM bytes: file offset 0x21CDC4, size 0xFA
	.byte 0x00, 0x00, 0x03, 0xCC, 0xCD, 0x21, 0x08, 0x00, 0x29, 0xDC, 0x08, 0x29, 0x9D, 0x00, 0x29, 0x78
	.byte 0x00, 0x02, 0x02, 0x2F, 0x43, 0x26, 0x08, 0x03, 0x39, 0x43, 0x26, 0x08, 0x05, 0xE6, 0xCD, 0x21
	.byte 0x08, 0x00, 0xA6, 0x07, 0x41, 0x18, 0x5E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x2F, 0x43
	.byte 0x26, 0x08, 0x03, 0x39, 0x43, 0x26, 0x08, 0x05, 0x01, 0xCE, 0x21, 0x08, 0x00, 0xA6, 0x07, 0x41
	.byte 0x18, 0x5F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x6A, 0x5A, 0x0F, 0x00, 0xBE, 0xCE, 0x21
	.byte 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x44, 0xCE, 0x21, 0x08, 0x1A, 0x00
	.byte 0x80, 0x1E, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x68, 0x29, 0xC3, 0x03, 0x29, 0xC4
	.byte 0x03, 0x53, 0x01, 0x00, 0x28, 0x1E, 0x00, 0x29, 0x4F, 0x01, 0x05, 0x8F, 0xCE, 0x21, 0x08, 0x02
	.byte 0x0F, 0x00, 0xFD, 0xCE, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x6A, 0x5A, 0x0F, 0x00, 0x16, 0xCF
	.byte 0x21, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x85, 0xCE, 0x21, 0x08, 0x1A
	.byte 0x00, 0x80, 0x1F, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x00, 0x68, 0x29, 0xC4, 0x03, 0x29
	.byte 0xC3, 0x03, 0x53, 0x02, 0x00, 0x28, 0x1E, 0x00, 0x29, 0x50, 0x01, 0x05, 0x8F, 0xCE, 0x21, 0x08
	.byte 0x02, 0x0F, 0x00, 0x53, 0xCF, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x16, 0x04, 0x80, 0x01, 0x00
	.byte 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x20, 0x00, 0x16, 0x07, 0x80, 0x02, 0x00, 0x25
	.byte 0x35, 0x01, 0x27, 0x25, 0x98, 0x01, 0x27, 0x16, 0xCB, 0x40, 0x01, 0x00, 0x2A, 0x78, 0x00, 0x39
	.byte 0x00, 0x1A, 0xFF, 0x13, 0x00, 0x3B, 0x00, 0x27, 0x6C, 0x02
