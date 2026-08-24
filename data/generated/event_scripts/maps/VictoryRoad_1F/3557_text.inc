	@ data/maps/VictoryRoad_1F/scripts.inc:139 VictoryRoad_1F_Text_EdgarIntro (+1 aliases)
	.globl gText_Rom_21979B
gText_Rom_21979B: @ 0x0821979B
	.string "ここまでは なんとか これたが\nあと すこしが とても とおいよ……"
	.byte EOS
	.if (. - gText_Rom_21979B) > 0x23
	.error "gText_Rom_21979B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21979B) < 0x23
	.space 0x23 - (. - gText_Rom_21979B)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:142 VictoryRoad_1F_Text_EdgarDefeat (+1 aliases)
	.globl gText_Rom_2197BE
gText_Rom_2197BE: @ 0x082197BE
	.string "ここで おわったか……"
	.byte EOS
	.if (. - gText_Rom_2197BE) > 0xc
	.error "gText_Rom_2197BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197BE) < 0xc
	.space 0xc - (. - gText_Rom_2197BE)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:145 VictoryRoad_1F_Text_EdgarPostBattle
	.globl gText_Rom_2197CA
gText_Rom_2197CA: @ 0x082197CA
	.string "ここまで きたなら\nいきおいで チャンピオンに なれよ!\lきみなら できるさ!"
	.byte EOS
	.if (. - gText_Rom_2197CA) > 0x28
	.error "gText_Rom_2197CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197CA) < 0x28
	.space 0x28 - (. - gText_Rom_2197CA)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:148 VictoryRoad_1F_Text_AlbertIntro (+1 aliases)
	.globl gText_Rom_2197F2
gText_Rom_2197F2: @ 0x082197F2
	.string "せっかく ここまで きたんだ\nいまさら まけるなんて ありえないよ!"
	.byte EOS
	.if (. - gText_Rom_2197F2) > 0x23
	.error "gText_Rom_2197F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2197F2) < 0x23
	.space 0x23 - (. - gText_Rom_2197F2)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:151 VictoryRoad_1F_Text_AlbertDefeat (+1 aliases)
	.globl gText_Rom_219815
gText_Rom_219815: @ 0x08219815
	.string "まさか……\nまけたのか……?"
	.byte EOS
	.if (. - gText_Rom_219815) > 0xf
	.error "gText_Rom_219815 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219815) < 0xf
	.space 0xf - (. - gText_Rom_219815)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:154 VictoryRoad_1F_Text_AlbertPostBattle
	.globl gText_Rom_219824
gText_Rom_219824: @ 0x08219824
	.string "ここで まけた……\pということは まだ チャンピオンに なる\nしかくが なかったと いうことか……"
	.byte EOS
	.if (. - gText_Rom_219824) > 0x32
	.error "gText_Rom_219824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219824) < 0x32
	.space 0x32 - (. - gText_Rom_219824)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:157 VictoryRoad_1F_Text_HopeIntro (+1 aliases)
	.globl gText_Rom_219856
gText_Rom_219856: @ 0x08219856
	.string "この はてしなく けわしい みち こそ\nまさに チャンピオンへの みち なのよ!"
	.byte EOS
	.if (. - gText_Rom_219856) > 0x29
	.error "gText_Rom_219856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219856) < 0x29
	.space 0x29 - (. - gText_Rom_219856)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:160 VictoryRoad_1F_Text_HopeDefeat (+1 aliases)
	.globl gText_Rom_21987F
gText_Rom_21987F: @ 0x0821987F
	.string "すばらしい たたかいかた ね……"
	.byte EOS
	.if (. - gText_Rom_21987F) > 0x11
	.error "gText_Rom_21987F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21987F) < 0x11
	.space 0x11 - (. - gText_Rom_21987F)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:163 VictoryRoad_1F_Text_HopePostBattle
	.globl gText_Rom_219890
gText_Rom_219890: @ 0x08219890
	.string "あなたには チャンピオンに なれる\nかのうせいが あるみたいね"
	.byte EOS
	.if (. - gText_Rom_219890) > 0x20
	.error "gText_Rom_219890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219890) < 0x20
	.space 0x20 - (. - gText_Rom_219890)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:166 VictoryRoad_1F_Text_QuincyIntro (+1 aliases)
	.globl gText_Rom_2198B0
gText_Rom_2198B0: @ 0x082198B0
	.string "チャンピオンロード とは なにか?\nかてたら おしえてやろう!"
	.byte EOS
	.if (. - gText_Rom_2198B0) > 0x20
	.error "gText_Rom_2198B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198B0) < 0x20
	.space 0x20 - (. - gText_Rom_2198B0)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:169 VictoryRoad_1F_Text_QuincyDefeat (+1 aliases)
	.globl gText_Rom_2198D0
gText_Rom_2198D0: @ 0x082198D0
	.string "うん いいだろう!"
	.byte EOS
	.if (. - gText_Rom_2198D0) > 0xa
	.error "gText_Rom_2198D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198D0) < 0xa
	.space 0xa - (. - gText_Rom_2198D0)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:172 VictoryRoad_1F_Text_QuincyPostBattle
	.globl gText_Rom_2198DA
gText_Rom_2198DA: @ 0x082198DA
	.string "ここを ぶじに ぬけきるって ことが\nポケモンチャンピオンを めざす やつの\lさいごの しれん なんだ!\pだから チャンピオンロードと\nよばれて いるのさ"
	.byte EOS
	.if (. - gText_Rom_2198DA) > 0x4e
	.error "gText_Rom_2198DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2198DA) < 0x4e
	.space 0x4e - (. - gText_Rom_2198DA)
	.endif
	@ data/maps/VictoryRoad_1F/scripts.inc:175 VictoryRoad_1F_Text_KatelynnIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_219928
gText_Rom_219928: @ 0x08219928
	.string "ここまで きた ひとに\nなにも いうことは ない…… いくわよ!"
	.byte EOS
	.if (. - gText_Rom_219928) != 0x21
	.error "gText_Rom_219928 must retain its original byte length"
	.endif
	.globl gText_Rom_219945
	.set gText_Rom_219945, gText_Rom_219928 + 0x1d
	@ data/maps/VictoryRoad_1F/scripts.inc:178 VictoryRoad_1F_Text_KatelynnDefeat (+1 aliases)
	.globl gText_Rom_219949
gText_Rom_219949: @ 0x08219949
	.string "くやしいわ……!"
	.byte EOS
	.if (. - gText_Rom_219949) > 0x9
	.error "gText_Rom_219949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219949) < 0x9
	.space 0x9 - (. - gText_Rom_219949)
	.endif
