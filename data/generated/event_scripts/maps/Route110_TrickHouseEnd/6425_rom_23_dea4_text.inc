	@ data/maps/Route110_TrickHouseEnd/scripts.inc:277 Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry
	.globl gText_Rom_23DC3B
gText_Rom_23DC3B: @ 0x0823DC3B
	.string "ど どうしよう……\nもう カラクリの ネタが\lつきて しまった……\lまた ぜんこく かくちを まわって\lしかけを いろいろ かんがえて くるか……"
	.byte EOS
	.if (. - gText_Rom_23DC3B) > 0x4a
	.error "gText_Rom_23DC3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DC3B) < 0x4a
	.space 0x4a - (. - gText_Rom_23DC3B)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:280 Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent
	.globl gText_Rom_23DC85
gText_Rom_23DC85: @ 0x0823DC85
	.string "みとめたくは ないんだが\nあんたには まけた……!\pまあ なんども きてくれた あたり\nよっぽど わがはいに\lみりょくを かんじたの だろうけどな\pそのことと わがはいが まけたこととは\nかんけいなし!\pそうだ! あんたと わがはいの\nゆうじょうを きねんして\lいいものを プレゼント しよう!\p「あかいテント」と「あおいテント」\nふたつ あるんだが どっちが ほしい?"
	.byte EOS
	.if (. - gText_Rom_23DC85) > 0xba
	.error "gText_Rom_23DC85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DC85) < 0xba
	.space 0xba - (. - gText_Rom_23DC85)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:283 Route110_TrickHouseEnd_Text_NoRoomInPC
	.globl gText_Rom_23DD3F
gText_Rom_23DD3F: @ 0x0823DD3F
	.string "なに パソコンに はいりきらない?\nそんなの わがはいが しるか!\p……と いいたい ところだけど\nわがはいは やさしいので あとで やろう!"
	.byte EOS
	.if (. - gText_Rom_23DD3F) > 0x48
	.error "gText_Rom_23DD3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DD3F) < 0x48
	.space 0x48 - (. - gText_Rom_23DD3F)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:286 Route110_TrickHouseEnd_Text_LeavingOnJourney
	.globl gText_Rom_23DD87
gText_Rom_23DD87: @ 0x0823DD87
	.string "…… …… ……\pわがはいは これから\nあらたな しかけを もとめて\lたびに でる ことに する……\lあんたも いつか ここにきて\lまた あそんで いってくれ!\pそれでは さらば…!"
	.byte EOS
	.if (. - gText_Rom_23DD87) > 0x5c
	.error "gText_Rom_23DD87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DD87) < 0x5c
	.space 0x5c - (. - gText_Rom_23DD87)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:289 Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward
	.globl gText_Rom_23DDE3
gText_Rom_23DDE3: @ 0x0823DDE3
	.string "よしっ あんたに\nほうびを やろう!"
	.byte EOS
	.if (. - gText_Rom_23DDE3) > 0x13
	.error "gText_Rom_23DDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DDE3) < 0x13
	.space 0x13 - (. - gText_Rom_23DDE3)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:292 Route110_TrickHouseEnd_Text_NoRoomForThis
	.globl gText_Rom_23DDF6
gText_Rom_23DDF6: @ 0x0823DDF6
	.string "なにっ もちきれない?\nそんなに なにを もちあるいてるんだ?\lまあ せっかく ここまで こられたんだし\lほうびは あとで やろう!"
	.byte EOS
	.if (. - gText_Rom_23DDF6) > 0x43
	.error "gText_Rom_23DDF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DDF6) < 0x43
	.space 0x43 - (. - gText_Rom_23DDF6)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:295 Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou
	.globl gText_Rom_23DE39
gText_Rom_23DE39: @ 0x0823DE39
	.string "なんだ とくいそうな かお してからに\nわがはいに かった きに なるのは\lまだ はやいわ!\lこのあとも また しかけを つくるから\lそれが おわってから わがはいを わらえ!\pそれでは じかいを おたのしみに!"
	.byte EOS
	.if (. - gText_Rom_23DE39) > 0x6b
	.error "gText_Rom_23DE39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DE39) < 0x6b
	.space 0x6b - (. - gText_Rom_23DE39)
	.endif
	@ data/maps/Route110_TrickHouseEnd/scripts.inc:298 Route110_TrickHouseEnd_Text_YoureIgnoringMe
	.globl gText_Rom_23DEA4
gText_Rom_23DEA4: @ 0x0823DEA4
	.string "おいおい\nわがはいの ことは むし か!\lずいぶん さみしい じゃないか"
	.byte EOS
	.if (. - gText_Rom_23DEA4) > 0x25
	.error "gText_Rom_23DEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DEA4) < 0x25
	.space 0x25 - (. - gText_Rom_23DEA4)
	.endif
	@ Embedded ROM bytes: file offset 0x23DEC9, size 0x8A
	.byte 0x03, 0xCF, 0xDE, 0x23, 0x08, 0x00, 0x16, 0xB5, 0x40, 0x01, 0x00, 0x02, 0x01, 0xDB, 0xDE, 0x23
	.byte 0x08, 0x00, 0x21, 0xAB, 0x40, 0x02, 0x00, 0x06, 0x01, 0xE7, 0xDE, 0x23, 0x08, 0x02, 0xA2, 0x0D
	.byte 0x00, 0x01, 0x00, 0x0B, 0x02, 0x00, 0x00, 0x02, 0x69, 0x21, 0xAB, 0x40, 0x00, 0x00, 0x06, 0x01
	.byte 0x03, 0xDF, 0x23, 0x08, 0x05, 0xAC, 0xD1, 0x23, 0x08, 0x02, 0x16, 0xAB, 0x40, 0x01, 0x00, 0x05
	.byte 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00, 0x63, 0x02, 0x00, 0x00, 0x95, 0xDF, 0x23, 0x08, 0xB8
	.byte 0xDF, 0x23, 0x08, 0x0F, 0x00, 0xC5, 0xDF, 0x23, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x4C, 0x01
	.byte 0x00, 0x00, 0xD6, 0xDF, 0x23, 0x08, 0xEB, 0xDF, 0x23, 0x08, 0x0F, 0x00, 0xF9, 0xDF, 0x23, 0x08
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x64, 0x02, 0x00, 0x00, 0x0F, 0xE0, 0x23, 0x08, 0x27, 0xE0, 0x23
	.byte 0x08, 0x0F, 0x00, 0x3B, 0xE0, 0x23, 0x08, 0x09, 0x06, 0x02
