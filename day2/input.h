#pragma once
#include <string_view>
#include <array>
using namespace std::string_view_literals;

const std::array INPUT = {
    "6-10 s: snkscgszxsssscss"sv,
    "6-7 b: bbbbbxkb"sv,
    "2-4 n: nnnjn"sv,
    "1-2 j: jjjj"sv,
    "5-9 z: jgzzzqhbj"sv,
    "4-11 m: mfmmmpmjmkdr"sv,
    "12-15 t: twqrxttwttthtkxbz"sv,
    "8-9 z: ftzjzzzzr"sv,
    "17-18 h: cpkhssvpphzvprfnft"sv,
    "7-8 b: bjbbbbbb"sv,
    "4-5 p: pppppppppgppps"sv,
    "16-18 r: rrrrrrrrrrrrrrrrrr"sv,
    "9-16 v: vvvrpvbvvvvvvvvvwvvh"sv,
    "11-15 d: ddddddddddddddjd"sv,
    "9-14 g: ggbggghggggggggw"sv,
    "1-5 d: ddddbd"sv,
    "1-4 x: xxxwxxx"sv,
    "1-2 l: bdjjddlqg"sv,
    "1-4 b: lbbxb"sv,
    "15-16 f: ffffffffffffffmz"sv,
    "10-16 m: mmlmmmvmmmbhmmmq"sv,
    "4-15 v: vlfvvqphhjfvlgt"sv,
    "5-12 m: mmmmjmwmmmmcmmm"sv,
    "7-8 q: qqqqqqxkq"sv,
    "4-9 h: hhzhhhhhhhhhsh"sv,
    "3-7 t: thltdtjtstzrtwtt"sv,
    "6-7 k: kkkkkkk"sv,
    "1-5 q: jqwqd"sv,
    "4-13 x: xxxxxxxxxxxxxxxxxx"sv,
    "1-4 l: llfl"sv,
    "6-12 n: nnffnfnnmnffnx"sv,
    "4-6 m: xmvxnmpmm"sv,
    "5-7 m: mmmmbmmmmmmmmm"sv,
    "9-17 f: ffffflffbfffffcffff"sv,
    "4-10 k: kkklkkkkkhktkkbkzq"sv,
    "8-15 z: kdxxzzlhpzgbzjzz"sv,
    "2-5 q: qrqqbqqqqqqqkqq"sv,
    "3-5 t: zrttht"sv,
    "9-12 t: ttxgntjmvntctpfrt"sv,
    "2-3 k: kkkk"sv,
    "8-10 j: jjjjjjjjjj"sv,
    "2-9 k: vkwkhcqnk"sv,
    "9-10 t: ttttttthtt"sv,
    "4-6 b: bbbbbbbb"sv,
    "9-12 n: xnvnnvldhthlsn"sv,
    "2-4 w: wwwwwwj"sv,
    "6-10 t: tttttwttttvtt"sv,
    "3-10 j: jqjjjxjdjnjjjj"sv,
    "15-18 q: kqlncdqwclqpjzrbnq"sv,
    "7-8 p: gpwbjppp"sv,
    "3-13 m: mmmmlsmfvmhmmmm"sv,
    "7-10 s: wdshsrsgsl"sv,
    "8-16 f: fffffffxfffffffcf"sv,
    "16-18 s: ssskswhsvslwsssrsq"sv,
    "12-14 j: gjjjjkjgjkjhjvj"sv,
    "13-14 t: gtttvftwtgvhlt"sv,
    "6-7 v: vvvvvgbv"sv,
    "2-8 l: ssldslmvl"sv,
    "3-9 l: bflzllqkqlkll"sv,
    "8-9 n: rrnnnnnnsn"sv,
    "7-14 p: bqsrxgplkpdvbpkn"sv,
    "2-5 z: wzbclnsxt"sv,
    "2-4 k: knkxk"sv,
    "6-8 d: drddjddjdd"sv,
    "15-16 p: ztgptpfpcwppqrzppps"sv,
    "1-3 k: nmsqksv"sv,
    "7-10 n: pwhbcwnlznfnvrlnds"sv,
    "13-15 t: tttttttttttttttttt"sv,
    "10-12 b: bbbbbbdbbgfxbbbf"sv,
    "3-5 w: rwwwj"sv,
    "18-19 x: xxxxmxxxxwpxxxfxgln"sv,
    "1-4 g: lfsjtgggg"sv,
    "13-15 x: mxzgtxhrxjhxtnf"sv,
    "13-14 d: ddddddddddddlx"sv,
    "3-5 r: rrrtrrtmlr"sv,
    "1-7 t: thttttttttt"sv,
    "2-5 g: sngggj"sv,
    "8-9 n: tnnnnnnnn"sv,
    "6-10 w: wkwwjfwltk"sv,
    "12-18 n: nnnnnnnnnnnnnnsnnh"sv,
    "14-18 m: mmmmmmmmmmmmmmmmmmmm"sv,
    "5-15 v: fvvfrcqkvkggnpl"sv,
    "13-19 f: ffffffftfffdnffffpsf"sv,
    "13-15 k: kgkkkmkkkgftklb"sv,
    "4-6 h: hhhchvh"sv,
    "7-14 l: qmbdhdjbrglxql"sv,
    "13-17 w: kwwwwwwwwwwwdpwww"sv,
    "1-5 q: pqqqdqqqq"sv,
    "8-9 p: vhwphvpfp"sv,
    "2-4 h: hljmh"sv,
    "1-2 c: tmcc"sv,
    "3-5 f: dpnvwffhlp"sv,
    "3-5 m: mmmmmm"sv,
    "10-12 c: ngjnczmcscxc"sv,
    "2-4 x: mxxj"sv,
    "4-6 m: xbmkmm"sv,
    "1-6 l: kllllsblqhngl"sv,
    "11-18 x: xprkjcrxkgxxgwtbmx"sv,
    "4-6 k: vwxshkkkkbtfbhl"sv,
    "11-15 z: dzzkzjjzzzzzzzlmzbn"sv,
    "5-6 f: ffffnfffflfjff"sv,
    "3-6 d: ddddddbd"sv,
    "6-9 r: wrrrvrrrr"sv,
    "8-9 n: nnnnjnnnt"sv,
    "2-7 b: bxptdkctbrxfllpvj"sv,
    "3-4 x: hxxv"sv,
    "5-14 n: nrnnnlsnznnzrqnjxnp"sv,
    "1-3 w: wwww"sv,
    "9-12 x: xxmxxxxxxxxxtxx"sv,
    "10-14 j: jjnjjjjlvjkcsjjdllvj"sv,
    "4-6 w: wgwbwwww"sv,
    "10-12 t: ttqttttttttl"sv,
    "10-11 t: ttwtttttttv"sv,
    "9-15 t: ttttttttftttttttt"sv,
    "2-3 p: pfgp"sv,
    "2-4 z: brrksnvqjzwqjvjs"sv,
    "8-9 n: knnnftzjbqj"sv,
    "6-7 w: swjwwdwwwwwwwww"sv,
    "1-2 j: xjlrkjjztrjfpss"sv,
    "13-14 l: llllllllllllvlllllr"sv,
    "7-12 l: lllllllllllblllll"sv,
    "7-8 j: gqdcmjqh"sv,
    "3-9 g: gchkbvgvgw"sv,
    "15-17 b: bbbbcbbbgbbbbbmbg"sv,
    "1-7 h: qlmhhcdhhhhhhhhhh"sv,
    "2-15 c: ccccccccccccccscccc"sv,
    "1-2 q: xvch"sv,
    "3-9 w: wwwwwwxwww"sv,
    "2-4 x: jskx"sv,
    "3-7 t: btwsnvts"sv,
    "9-11 g: gkhgwctggbm"sv,
    "2-7 g: xvgwwltdvnzscbtqwb"sv,
    "1-11 k: kkqkpkkdkkkkkkkhkk"sv,
    "4-12 h: nbqlhjbqhxtnxlzlr"sv,
    "3-4 d: dwdd"sv,
    "8-9 k: kkkzbckklqqkhfkqkk"sv,
    "7-8 c: pcxmqdwc"sv,
    "2-4 v: qbvwvvnvvp"sv,
    "3-9 c: pfqcblwxcrmx"sv,
    "1-9 t: fwgtcrftktt"sv,
    "7-8 p: pppppppp"sv,
    "6-13 w: dnwfhwkjffpdwgzdf"sv,
    "10-14 k: kkkkkkhkkwkkkkkk"sv,
    "2-4 s: zscssddtpmqblmd"sv,
    "11-13 b: dbvzwthlcmbkb"sv,
    "1-4 k: kqlxwvbkckwzmqxvtcc"sv,
    "2-10 s: sxssssgsssxsssnss"sv,
    "3-9 w: nxrmwlpgw"sv,
    "10-13 w: wwsgwwwwwwwkw"sv,
    "9-13 v: vhvvwjvcvbvvg"sv,
    "5-7 n: fbvnjpt"sv,
    "3-4 x: xxxx"sv,
    "9-10 l: rlllmlllll"sv,
    "7-9 d: ddddddddhd"sv,
    "4-8 z: zzzhzzzf"sv,
    "11-12 m: mmmmmmmmmmkf"sv,
    "4-8 m: bmfzppcqttct"sv,
    "2-4 m: mfmcmmmcx"sv,
    "2-9 p: rppzgvshn"sv,
    "7-8 r: rrrrrrrrrrvr"sv,
    "6-7 p: hkltppp"sv,
    "7-10 m: mmmmmfmmtmmmpbmm"sv,
    "6-14 p: pppppppppppppxp"sv,
    "4-6 p: wbspppnlmc"sv,
    "2-4 n: xnfnl"sv,
    "2-5 q: nqkcqmvwp"sv,
    "2-3 d: ddkbkdjd"sv,
    "5-9 b: qxjbblbrb"sv,
    "14-16 b: bbbbbbbbbbbbbqbbb"sv,
    "5-6 p: dppppp"sv,
    "5-8 j: kxztnjjn"sv,
    "14-18 k: krkkkkckkkkmktkkkkd"sv,
    "7-8 n: nnngxnfpnn"sv,
    "16-17 c: ccmccccccccccccfcccc"sv,
    "1-3 g: wggg"sv,
    "1-2 c: cqcckc"sv,
    "2-8 g: gjwdkbds"sv,
    "10-17 s: hswqssmttskspdlkkss"sv,
    "14-16 b: bbbbbbbbbbbbpbbrbbbb"sv,
    "12-16 r: srrmcbrrcrzrdwzng"sv,
    "2-3 h: fcws"sv,
    "9-13 p: gkgpqpghpjbpz"sv,
    "9-10 m: mmmmmmmmmmm"sv,
    "3-4 b: brbb"sv,
    "2-3 p: gncvqdhp"sv,
    "2-7 g: gdggggggggggggg"sv,
    "2-7 j: jjjjjjrjqjjj"sv,
    "3-5 v: ltptjlntf"sv,
    "1-7 w: gwwwwwfww"sv,
    "7-10 z: zzzzzzmzzzz"sv,
    "10-12 x: xxhxxxxxxgxsxxxx"sv,
    "11-12 b: bbbbbbbbbbbbd"sv,
    "16-17 v: vvvvvvvvvvvvvvjht"sv,
    "1-4 x: bxxx"sv,
    "16-19 g: gggggggwggggggjgggg"sv,
    "5-10 q: qjpqqvlnkqxmlv"sv,
    "4-6 p: qrpffplvpp"sv,
    "7-9 r: rrrrrrgrb"sv,
    "2-3 g: bgjg"sv,
    "10-12 t: ttjttttnttdtt"sv,
    "2-4 g: dgng"sv,
    "11-12 r: rrmrrrlrtrrj"sv,
    "1-5 v: qvvvvvvvvvvvvvv"sv,
    "3-18 p: ftnfnpmjprmrzmhbnxj"sv,
    "10-12 w: dqnsjjxsqrwq"sv,
    "2-4 z: lzgkzsb"sv,
    "8-9 n: dwclxdtnndtpcgqmx"sv,
    "10-11 w: zjwdsphbbwlhp"sv,
    "2-9 d: zzprkgzczbs"sv,
    "14-19 c: gpjfrvsrcnbxbclctxc"sv,
    "1-9 f: fmhfvfffrfws"sv,
    "12-14 d: ddrddbddddddddhmdg"sv,
    "14-15 s: sslsssmsnssdxsj"sv,
    "2-10 v: ljppzjfvfnfp"sv,
    "1-2 z: qbwbzknrzzs"sv,
    "18-19 l: llllllllfllllllllll"sv,
    "2-3 p: ppgp"sv,
    "13-15 k: knkkkkkckkkkhkxk"sv,
    "3-6 v: vbjvmv"sv,
    "4-8 h: hmhcxfhg"sv,
    "12-14 v: vvngcvvvvkvgvs"sv,
    "2-3 j: xdjjrk"sv,
    "5-13 s: sssssrqsssssq"sv,
    "1-7 s: sssssssss"sv,
    "6-14 b: ptlvmbbrbxnvqbrmp"sv,
    "16-18 w: wwwswwnwwmwwwwwwwf"sv,
    "1-4 k: kkknkkkkk"sv,
    "1-4 g: ggrbk"sv,
    "9-11 r: rrrhrrrrrrrrr"sv,
    "11-13 x: xxxxxxxxxxxxnx"sv,
    "3-8 x: nsxvlvdfbkpxsgscn"sv,
    "12-15 h: hghhchvjhhhhlvhhhhh"sv,
    "11-12 n: nnnnnnnnnnjqn"sv,
    "10-13 r: jrzfzrzrqblmks"sv,
    "7-8 w: wwwwwwwh"sv,
    "3-4 k: kkbft"sv,
    "1-9 c: cccccjccccccn"sv,
    "2-7 r: rrvnrxrvrzsrbrs"sv,
    "3-10 l: llgdldmlplqlhdlll"sv,
    "4-8 m: mmzmbmgm"sv,
    "5-6 q: sfxqnftnbnqwq"sv,
    "5-6 v: vvvvgvvqv"sv,
    "9-14 h: dhmwrhzqqvhhhfhfhhht"sv,
    "4-7 p: jwwppvpklc"sv,
    "9-13 z: zzzzzzzzzpzzzx"sv,
    "13-14 l: fllklltlllllcphllll"sv,
    "12-15 m: htmbmqgljcmvmclgnm"sv,
    "9-10 b: bbbbbbbnbb"sv,
    "6-12 x: nxjbxxhxxxxgdxx"sv,
    "6-7 t: tttbwlk"sv,
    "8-11 q: fqqjtlswqgkqdqc"sv,
    "16-20 t: xplwqxbwtsfptbvtvcxt"sv,
    "3-4 k: kklkkkkkkxkkkk"sv,
    "3-9 m: kmmsvmpmxmgmb"sv,
    "6-12 j: jjtjjjjjjjjpjjwj"sv,
    "3-4 m: kkmbmzkx"sv,
    "7-8 f: gmfxlgfjtfst"sv,
    "1-3 w: wwwn"sv,
    "1-7 k: knkktkkn"sv,
    "13-16 v: vvvvvvvvvvvvvvvmvv"sv,
    "10-11 h: rhvdhnfhvtchlfhh"sv,
    "10-12 x: xgxwbqxkxxcwsfd"sv,
    "10-14 m: mmmrdxpcmcmmmkmmmmm"sv,
    "2-5 x: vvxpx"sv,
    "8-9 h: hhhhhhhmfh"sv,
    "16-19 j: jmwjjjjjjjjjjjjjjjz"sv,
    "2-3 r: sqrnr"sv,
    "14-19 p: ppppppppppppppppppk"sv,
    "2-5 w: wwwww"sv,
    "15-16 q: dppxtnhmxrhmncrqq"sv,
    "4-5 v: drhpp"sv,
    "1-4 p: pkhn"sv,
    "3-6 q: gwmrfwh"sv,
    "6-10 v: dlvvfhvvkb"sv,
    "1-8 q: qqqqqqqqqdqqqqqqqq"sv,
    "17-18 n: nnnnnnnnnxnnznnpnng"sv,
    "3-7 m: gmxzffwmbdm"sv,
    "12-14 m: dmzmcmmhjmqltm"sv,
    "3-16 w: drcbwtvqgbppbwzvm"sv,
    "8-10 d: ddbddddzdddddkpd"sv,
    "8-9 m: mmmmmmmmmmmm"sv,
    "1-3 l: glll"sv,
    "7-11 x: fxrxxdxxxqxnxx"sv,
    "6-7 d: ddddxgdd"sv,
    "7-8 g: hgggbggg"sv,
    "2-3 w: pwwtww"sv,
    "7-10 h: lhwbhjhzhx"sv,
    "3-14 b: bbbrvrbsfbnxrgqbbq"sv,
    "4-7 l: jzqkxlnpxlglfsll"sv,
    "6-7 b: hbpbbbb"sv,
    "2-4 w: pskwwxzpjvmwcnfr"sv,
    "13-15 m: mmmmmmmmxmpmxmmm"sv,
    "4-9 k: krxkzqzkkhrpqth"sv,
    "4-7 f: xfffkvfqzwhcfwkhq"sv,
    "4-10 q: qqqqqcqbqqq"sv,
    "14-15 s: lgszsdststlpgjbs"sv,
    "7-12 s: sspbsssskfns"sv,
    "7-8 d: cdddqpnd"sv,
    "13-15 p: ppppppppppppxppp"sv,
    "10-11 r: rrrfxrrrrrrrrr"sv,
    "10-12 z: zzzzzzzzzvzvzz"sv,
    "3-4 l: lllwll"sv,
    "7-9 p: ppppkpppqpppppsvx"sv,
    "3-4 k: kkkrk"sv,
    "4-5 v: zxmmvmhvr"sv,
    "14-15 r: rrrrrrrrrrrrrfjr"sv,
    "6-10 b: vwbgbbbbdbqsbb"sv,
    "5-7 j: jsjjjkv"sv,
    "3-4 m: tzmhr"sv,
    "11-13 r: rrrrrrrrrrqrhrr"sv,
    "1-4 s: psqmcssnk"sv,
    "5-6 z: zdkzzzz"sv,
    "3-5 p: cnpmbtknqdppmcjpzvcn"sv,
    "13-14 g: ggggkggggmtggd"sv,
    "14-17 c: nxmzcczccnvdcxpcmb"sv,
    "6-10 w: wlwwbdwwwwwwww"sv,
    "9-17 l: llllllllllllllllll"sv,
    "2-12 j: jpjdjjjzmjxj"sv,
    "1-3 n: szjntnnl"sv,
    "7-8 l: dpxlmhlbts"sv,
    "5-16 s: sssssssssssssssrs"sv,
    "1-6 m: pmqvlc"sv,
    "7-15 f: ffffffffqfkfffdxff"sv,
    "10-11 w: wwwwwwwwwwswwww"sv,
    "7-12 p: tkppvfpwksrp"sv,
    "4-7 f: fdjdgdvsksbfbnjkspc"sv,
    "4-11 b: bjmvfrmlmlbndl"sv,
    "1-3 r: rrrnxhgbwr"sv,
    "5-10 h: xhhmhhhlhbh"sv,
    "10-11 h: hghhhhhhdlhhh"sv,
    "5-6 g: gptglg"sv,
    "9-11 t: wtgtxtttqtmttt"sv,
    "5-11 f: jxqffhfsfmz"sv,
    "4-7 f: frjffbf"sv,
    "1-15 m: mmmmmmmmxmmmmmmmm"sv,
    "1-12 d: drwlbpdbzdgdjpnzmj"sv,
    "9-14 n: nfnmktjnncnnnln"sv,
    "1-2 h: pshhjhhhhf"sv,
    "2-4 t: tgttttttfb"sv,
    "2-4 w: dwpwhnxbf"sv,
    "7-11 b: vbcbzhbwhpb"sv,
    "4-5 k: hknck"sv,
    "5-12 m: mmmmtdmmmmmmmm"sv,
    "5-7 w: qwflwxq"sv,
    "2-5 g: jdnxdlclplvb"sv,
    "5-7 t: ttrtttttkr"sv,
    "8-18 l: lwscjwlmdlzlllnsllpw"sv,
    "2-8 c: cccxtccchbrkr"sv,
    "1-3 q: qqtqqqqq"sv,
    "3-13 d: dddddddbddddddd"sv,
    "1-7 r: jkpzrpfnrgpkc"sv,
    "9-10 t: ttttttttttt"sv,
    "11-12 w: wjwplwwwwwmw"sv,
    "9-12 r: rpsvrhrbnrwqch"sv,
    "6-11 p: zpzbpkpmtnptsnpbswc"sv,
    "4-6 t: jhzstt"sv,
    "3-4 t: ddpkcgpzhd"sv,
    "4-6 s: cvzshjfrsslxnslqddwt"sv,
    "1-3 c: cgsczhl"sv,
    "1-4 d: lddqdqd"sv,
    "6-7 v: vvvvvvb"sv,
    "5-8 w: wwwwwwwwww"sv,
    "5-11 p: ddswpbpppsqpp"sv,
    "5-6 x: dfzxxxhhqjvj"sv,
    "3-7 m: mmmmmmmmmm"sv,
    "4-8 g: ggggggggg"sv,
    "5-6 j: jjcjjn"sv,
    "5-6 n: nndtns"sv,
    "4-5 t: ltxkdpst"sv,
    "2-8 b: ldwkbzbxgpbbbb"sv,
    "11-12 w: wwqwdqwwwqhvwww"sv,
    "15-17 k: klkcxqbwrktxcmqlnb"sv,
    "5-6 k: tkqhkkkkrkjfd"sv,
    "12-13 x: nxxxrjxxxdjlxxbt"sv,
    "9-12 m: mmzmmmrmmfmgmmmmb"sv,
    "2-5 v: tkbhvlvp"sv,
    "12-14 v: dvbvvvvhrcvvvxxvvvvv"sv,
    "14-16 x: xxxxxxxxxxxxxrxxxx"sv,
    "6-7 v: xvswnvvm"sv,
    "6-9 c: vcpcksxwbdlc"sv,
    "5-11 s: sssssjssssrsdjsssq"sv,
    "6-16 j: jjjjjmjjjjjjjjjnj"sv,
    "8-12 g: ggggwggggggnggg"sv,
    "4-5 c: ccczk"sv,
    "14-15 l: lllllllllllllkm"sv,
    "10-11 r: rrrrrrrrrrrrr"sv,
    "3-5 n: dwnvnlj"sv,
    "2-4 x: xdxxxx"sv,
    "5-6 j: jjjjjjj"sv,
    "3-9 k: kkkkkhlrkktt"sv,
    "3-7 t: stqtgfdprtqjsgznrtjh"sv,
    "11-16 n: hsnnnnnnnnfnvnpqnnn"sv,
    "13-16 v: kdvbvxvvtvhvvvvq"sv,
    "1-3 v: vwpvkvdpxgc"sv,
    "14-17 v: vvvvvvvvvvvvvnvvhv"sv,
    "14-15 m: mmmmmmmmmmmmmtm"sv,
    "6-10 m: mmmmmhmmmm"sv,
    "5-8 t: tttjrttdsttfttwstf"sv,
    "6-7 c: ccqcvcc"sv,
    "2-5 v: vvvvvv"sv,
    "8-16 c: cccccccccwcpcccmcccc"sv,
    "4-5 t: ztvttktttttt"sv,
    "10-11 n: rnmnnnnnnnnnnnnpt"sv,
    "5-6 g: lgsggggg"sv,
    "15-18 s: lcsmgkjqzdpcgvsrng"sv,
    "2-6 p: wwpppp"sv,
    "9-10 v: vvvvsvvvmvv"sv,
    "6-11 c: qrmdjxzsmxcmcccgrr"sv,
    "17-18 b: bbbbbbbbbbbbbbbbbbbb"sv,
    "6-10 t: thtxgtpxwt"sv,
    "2-8 f: xkgbrpqfsrhhbnfpdg"sv,
    "3-8 c: gqkkvgkcqfwdc"sv,
    "5-6 c: jjcsjf"sv,
    "8-16 q: fbwdmlwljqqcrqsq"sv,
    "3-10 m: mjmmsmmmmmmcmm"sv,
    "5-15 x: xmrvcsjwxxdpsrxzcrzj"sv,
    "3-7 x: rxngzxxg"sv,
    "17-19 z: mmvfgzpmbvzsrmkgmmmb"sv,
    "3-4 z: zdzz"sv,
    "4-5 v: vzcvb"sv,
    "3-11 z: tzllpgzzmwxznh"sv,
    "8-11 x: ptgvnbxzsxwdb"sv,
    "2-3 r: rrrrr"sv,
    "6-10 b: bbmbbbbbbb"sv,
    "6-11 q: wvmqrzrllhxfzmpkp"sv,
    "13-17 v: vvrgvvsvvcqkvvvvbvvw"sv,
    "16-18 p: ppppppppnppgppppclp"sv,
    "13-15 g: gglggggggngggggggggg"sv,
    "15-17 b: bbbbbbbbbbbbbbbbb"sv,
    "3-6 t: tpwzktlzkdt"sv,
    "2-3 m: lmvtnfjzmm"sv,
    "1-7 j: jzjjfjx"sv,
    "15-17 r: rtfdnhrrhrrdcswrl"sv,
    "1-3 d: gdfdmddddwdddlsd"sv,
    "3-4 r: qrtr"sv,
    "10-11 m: mmmmmmmmmkc"sv,
    "2-5 n: gntnnnncc"sv,
    "9-14 b: bbbbbbbbbbbbbb"sv,
    "10-13 f: fxfffznffffzwffflz"sv,
    "5-12 j: vjjrjjjjngjjjjm"sv,
    "6-8 k: kkkrkklkkkkkkk"sv,
    "5-7 r: rrhzsxrjjw"sv,
    "17-18 g: gggggggggggggggggf"sv,
    "2-3 h: ghhvrh"sv,
    "1-3 j: hjjxjjjj"sv,
    "3-5 q: gbqnqkprckxqglkhw"sv,
    "17-18 n: ngnnnnnqnnnnnnnnnnnn"sv,
    "2-3 m: xlhmmq"sv,
    "6-7 p: kvvphgj"sv,
    "9-12 k: kpkzkkzkkkkkbwk"sv,
    "9-10 k: kkrkkkkkmt"sv,
    "5-10 t: tttttttttttttttt"sv,
    "10-11 l: ztdvlllzfltlwlglkhcj"sv,
    "7-12 t: bttttqtqttttttttg"sv,
    "3-4 z: xzvb"sv,
    "5-10 h: lhcdhkhhhhb"sv,
    "1-6 z: jqzzqzzzzzzzzzzzzz"sv,
    "6-7 x: qxxxxtxz"sv,
    "13-14 g: gggngggggggrgsgg"sv,
    "1-2 t: tttt"sv,
    "11-15 w: hpwhwmwlkbwtwmwlj"sv,
    "8-10 r: rnrhrrmprnrrr"sv,
    "5-12 z: rshzhwgzhfjb"sv,
    "15-16 s: sssqssssssssmsss"sv,
    "9-12 z: zdzzzzzzkzmz"sv,
    "10-12 c: mfgpskncfcfctjmt"sv,
    "5-10 p: sppwnpdpptppwdppppp"sv,
    "3-14 q: mnzfgfmvmsdlqg"sv,
    "1-13 s: sssssssfssssbsss"sv,
    "6-8 d: ddddddddd"sv,
    "2-5 j: vsbbjh"sv,
    "14-16 m: nmklmsrpjxwpdbmj"sv,
    "3-8 v: rfvvvjqv"sv,
    "18-20 p: pppppppppqhpflppbppp"sv,
    "7-11 x: xxxxxxwxxxx"sv,
    "3-4 l: llmvlll"sv,
    "8-9 w: grmvwtwbz"sv,
    "2-11 m: mmmmmmqmmmsmmmmmmmmm"sv,
    "6-13 h: hhhhhrshshhhlhhhh"sv,
    "3-12 t: tnttblttttcvrtttx"sv,
    "5-18 f: cfffcffvgffffrmlfx"sv,
    "1-3 n: rnjnnnnnnnnnnnnnnn"sv,
    "1-2 w: smmdq"sv,
    "1-5 v: vvvvvv"sv,
    "5-15 s: tssssscssffhsswssss"sv,
    "3-11 b: bbbbbbbbsbkbbbr"sv,
    "13-15 j: xjjpjjcjjjjjjcj"sv,
    "5-10 g: bvjvgpzgdgkmmzwnwrxz"sv,
    "2-7 q: qqqqqrq"sv,
    "10-12 d: fddddbdddxdqpd"sv,
    "5-7 c: hsccjccrlm"sv,
    "11-15 r: nrrrlrrvrdlrprw"sv,
    "13-14 r: drrtbrrrrrrrrcrrr"sv,
    "8-10 c: ccccxcchfjcccccxpc"sv,
    "8-9 s: sssssssss"sv,
    "1-10 r: rvlgkrrrrm"sv,
    "8-13 w: jwbwcwmwwvwwwwww"sv,
    "7-12 k: fxkkcnkkbvkxbkphx"sv,
    "7-8 l: llllmlvll"sv,
    "11-15 q: qdjpqwgfqjdqnnq"sv,
    "8-9 m: mmmmmmmvmmm"sv,
    "6-7 k: kkkksmkb"sv,
    "4-6 h: hhhlhhhhfhhhhhh"sv,
    "2-5 k: xzjlwb"sv,
    "3-12 j: sjwqrjzjgqrj"sv,
    "5-18 p: ppppppppppppppppphpp"sv,
    "1-3 g: gggrggggg"sv,
    "14-15 n: nnnnnnnnnnxnnhnnn"sv,
    "19-20 d: jkpzsxwsddzccjdkcptj"sv,
    "2-4 v: wpdz"sv,
    "1-8 w: dwjtngwwwrwhp"sv,
    "13-15 t: tttttctttttxvfrt"sv,
    "6-11 h: ksvshqhhdth"sv,
    "8-9 k: khfkdkppl"sv,
    "11-12 d: whlmcdmfgfddd"sv,
    "11-12 p: htvxpkfngthz"sv,
    "6-9 v: vqvmvvbbv"sv,
    "5-8 m: lghmmmrmmw"sv,
    "14-16 q: dtmqqrqqqqqgpgqtqr"sv,
    "2-11 f: bfjskxzlgvfml"sv,
    "10-19 p: kpppppppphppppppppp"sv,
    "5-7 j: rfbpzmjtjj"sv,
    "9-10 p: kpppppppqpp"sv,
    "3-15 k: hgkgrqblnjmsbvrghzdk"sv,
    "6-7 r: rrtwrwlfrswwr"sv,
    "3-4 k: fkkdv"sv,
    "12-20 g: ggggggggkggggggggkgh"sv,
    "3-5 x: xxxxpxxxxxxxxxb"sv,
    "8-10 k: kkkkkkkzkh"sv,
    "4-10 q: qqqmqqqqqcqq"sv,
    "4-12 t: ttgtqblzqzpttcxdtfn"sv,
    "18-20 s: sssbbsscsjvslsvsssss"sv,
    "3-6 x: xxxxxxx"sv,
    "4-5 t: tttttt"sv,
    "5-7 q: xqqqqqqqxkqqqqqqqtqq"sv,
    "2-4 s: zsvq"sv,
    "6-7 b: mmbcklx"sv,
    "1-13 z: zzfzkshpslwcn"sv,
    "1-14 d: ddpddtdddddmmf"sv,
    "8-13 j: jjjjjjjjjjjjjjjjjz"sv,
    "5-6 c: cjjlxb"sv,
    "10-12 v: vvvvvvtvvmvv"sv,
    "2-3 b: wfbbg"sv,
    "1-10 l: llllllllllllllllll"sv,
    "5-10 d: hdbhdgxcjd"sv,
    "10-13 t: ttttttttttttnt"sv,
    "5-6 h: vhmhhh"sv,
    "16-17 x: xxxxxxxxxxxxxxxsqx"sv,
    "6-14 g: gzggggzhggggzgg"sv,
    "15-20 f: ffbfxffffvfffffffhfd"sv,
    "2-3 d: xdvw"sv,
    "5-7 g: zgggjgq"sv,
    "2-12 g: ggggggggmgggggg"sv,
    "6-8 h: hhhhhhphhhlhjhhxfh"sv,
    "3-10 j: knjklstqxwcsjf"sv,
    "2-3 h: hvnwjxhpsc"sv,
    "7-8 w: wwwlwwgw"sv,
    "14-16 s: chgtpswssxsqtwzrsqt"sv,
    "5-6 d: zdbdkl"sv,
    "3-4 p: lwkpbrbp"sv,
    "8-14 c: cbhtccjmrccrcp"sv,
    "2-3 s: tctflmgdtsjjfxpl"sv,
    "3-4 g: gggjkctwdsgl"sv,
    "2-4 h: ghbh"sv,
    "4-13 h: fczphhvflghhhd"sv,
    "3-10 x: jkzhgljwsblcrmbwfx"sv,
    "12-13 p: npfgppprzpppc"sv,
    "7-12 l: sqbplmqnlmwph"sv,
    "1-8 p: hpppvpprppp"sv,
    "12-18 n: nhbznznxncnkcchscl"sv,
    "9-10 g: grjxmgzpgk"sv,
    "6-7 g: rcmkggggggg"sv,
    "1-7 b: bbbbbbbb"sv,
    "2-3 t: ttftzqt"sv,
    "8-10 l: twbjlnblhck"sv,
    "1-2 c: cvbc"sv,
    "4-9 d: mfpdddsnd"sv,
    "5-8 f: flpvbdrfl"sv,
    "7-12 s: rhspsxlbpsmsclzrdsfc"sv,
    "2-4 h: vhhh"sv,
    "1-10 k: bhkkkkkkxkkkzk"sv,
    "5-15 q: qqqqqqqqqqqqdqdqql"sv,
    "12-15 c: ljvcklwjvngfgfgrjsv"sv,
    "8-10 w: pwwtpbwwvwwrwww"sv,
    "5-13 b: tbjmbfmknjhbb"sv,
    "1-2 v: cssd"sv,
    "2-5 s: ssssss"sv,
    "3-4 h: bhhxxhfh"sv,
    "3-5 p: pfppp"sv,
    "13-20 l: lcxxllcfjmllclljllfl"sv,
    "2-4 p: sqpzk"sv,
    "2-4 l: xlllb"sv,
    "1-7 t: ttttttrttttrttttttxt"sv,
    "10-12 m: bwmmghzmqmmpmj"sv,
    "5-8 l: jtlljpql"sv,
    "5-6 d: lddddd"sv,
    "6-8 c: nljczccdwvnmrlqvlsc"sv,
    "8-9 d: dzdddcddt"sv,
    "10-11 z: zzzzzzzzmqj"sv,
    "3-4 s: msssss"sv,
    "3-5 z: xzvdzbzt"sv,
    "2-18 v: bvcbpwkbdmclbnbmsv"sv,
    "9-12 b: jrcccsndstzbxprkvtq"sv,
    "3-11 n: vlntglzvvcnngn"sv,
    "3-8 v: rpgckwptlvdqsrqqt"sv,
    "6-11 q: qdqdkqvkvhdrdqm"sv,
    "9-12 b: khbmbgbbvbqb"sv,
    "9-10 g: gtggggggczgg"sv,
    "3-5 c: zqctcs"sv,
    "15-18 z: kbzsdhbbzxfzzqdjzc"sv,
    "7-8 g: ggggggzx"sv,
    "9-10 s: sswssrssqms"sv,
    "14-17 g: ggggcggggggggpggcgg"sv,
    "10-15 g: qgzmbkjlggrhgkg"sv,
    "9-11 j: jjjjjjjjqqjjjjjj"sv,
    "5-6 c: cgcdcchcccbcc"sv,
    "2-4 g: gggg"sv,
    "5-13 h: plkhhrmxhxhmh"sv,
    "11-16 v: vkkqrvbvbcvvnvvvvv"sv,
    "6-7 c: rlfmqphqrhqkhch"sv,
    "3-5 z: hzspz"sv,
    "8-9 d: kddmdddpdvddln"sv,
    "5-11 k: wkqkcfkpvnkvh"sv,
    "4-7 r: fnzzwxrxr"sv,
    "15-16 r: rrrrrrrrrrrrrrwr"sv,
    "2-19 f: fvffffffffffffffffwf"sv,
    "9-11 v: hbvbvvgcvvvj"sv,
    "2-4 m: mrxpv"sv,
    "13-14 z: zztzgzzpzzzzzg"sv,
    "4-10 t: qtvtcrfmlkrgtwsvwtw"sv,
    "3-7 g: ggggggfgggggggg"sv,
    "5-8 c: ccccfcccnmccc"sv,
    "6-12 z: bzfcjzdznzwzrzbzzqrn"sv,
    "14-15 c: ccccccccccccczkccccc"sv,
    "3-4 j: jjjjjjf"sv,
    "1-2 x: kxxxx"sv,
    "3-4 s: sksj"sv,
    "17-19 c: hvchccvccdxgccnxdcc"sv,
    "3-6 r: trrrrrrr"sv,
    "10-11 c: ckcjzcrzcbc"sv,
    "1-7 p: pmqplfpvgq"sv,
    "3-4 h: hhmx"sv,
    "5-6 n: nnwndln"sv,
    "5-10 v: bkkvfgvqwdt"sv,
    "7-14 h: hkjlwvhdnhxhwcnhs"sv,
    "4-12 f: xxwfjfcwslrfzrxfkxj"sv,
    "2-3 c: ccccc"sv,
    "4-13 k: kkkdkkkkkkkkkkk"sv,
    "8-10 b: mqlljkpbbbxbrbfx"sv,
    "1-4 p: pppp"sv,
    "14-17 n: nnnnnnnnnnnnnnnngnn"sv,
    "5-6 d: dddddddvw"sv,
    "9-10 r: rjtrrrmqrrrzrrrrjrrm"sv,
    "7-11 x: bxxxxxrwxpmn"sv,
    "13-14 w: gwmwwwlwwjwjwx"sv,
    "2-4 d: dddddvddd"sv,
    "7-9 p: pjmdppgpspcslh"sv,
    "13-16 l: tllllzllpvllvlzd"sv,
    "9-11 q: qzmwqqzqtqqq"sv,
    "4-5 d: dvdngdd"sv,
    "9-11 j: xxxvjrmgjpk"sv,
    "3-4 c: rvvcn"sv,
    "15-16 r: rxvmlslkpmqdqtdd"sv,
    "2-5 b: sbflb"sv,
    "4-5 w: wntpw"sv,
    "8-16 n: nnnnnnnhnqnnnnnnn"sv,
    "5-6 n: nnnnnnn"sv,
    "2-5 q: bsjfhq"sv,
    "6-18 r: prrrqkmrrrvbrrrrdfrv"sv,
    "3-5 g: xnxlp"sv,
    "4-11 s: jsstsssjssfssss"sv,
    "14-16 d: dddddddddsdddddd"sv,
    "18-19 n: vgngvbhdjfrbnznhhjzn"sv,
    "11-13 f: ffffffffffgfgf"sv,
    "5-11 n: dbgvngchnkngt"sv,
    "3-4 f: gsff"sv,
    "2-4 r: rfdrlznkzg"sv,
    "10-18 z: zzgzwzzzzzzdzzmzhzzn"sv,
    "4-5 s: qscmbssss"sv,
    "11-15 x: xbxxxxgxxxbxxzw"sv,
    "2-10 h: dkrnxknmthcv"sv,
    "12-13 b: bbbbvbsbbbbgcbnb"sv,
    "4-5 m: mmlmmsmmh"sv,
    "3-6 j: njrjjkcr"sv,
    "10-12 x: xxxxwdnxxxxx"sv,
    "14-16 g: hggggggggngggggg"sv,
    "8-9 x: gjqfxxxtxxxb"sv,
    "16-17 f: ffffffffjffkffffmffb"sv,
    "2-8 z: tsktkzfxntrv"sv,
    "2-6 v: hvvswd"sv,
    "1-2 w: xddl"sv,
    "2-6 k: svwvvkqmzwjkx"sv,
    "9-12 p: ppppppppbppspppb"sv,
    "12-19 m: mdjmlhsmxmwcmmmmmmm"sv,
    "3-5 x: rxjxb"sv,
    "17-18 r: rrrrrrrrrrrrrrrrwk"sv,
    "2-9 b: cbfbqcfwbmwd"sv,
    "1-11 h: hhhhhbhhhhmvhhhh"sv,
    "2-3 j: jkjjgjhxj"sv,
    "5-6 f: fffffffffhf"sv,
    "17-18 j: jprvtszvgsbtxlrhljsz"sv,
    "1-4 m: mmhmmmp"sv,
    "2-6 p: xvfkpkc"sv,
    "1-2 f: xqtfcf"sv,
    "1-5 r: brrrrrr"sv,
    "7-10 w: wwhwwwdwwj"sv,
    "1-4 w: vwwdh"sv,
    "1-3 f: hnpvgfwth"sv,
    "10-12 k: kkkkkkkkkdkq"sv,
    "5-13 r: rrpqrrvrqrswzr"sv,
    "9-17 x: xjxxvxvbtxxxtpxpx"sv,
    "12-13 j: njrjkcjgbjjnj"sv,
    "2-4 l: lvll"sv,
    "12-17 p: dpppprpbppnvpppprp"sv,
    "4-18 b: zftbmbxgzfzdvdnvhb"sv,
    "12-16 r: lcqgqjthprlxrzrrx"sv,
    "2-7 m: msclccmxhsmf"sv,
    "3-4 b: bfkb"sv,
    "2-6 k: skfgrk"sv,
    "4-5 q: qqqhhx"sv,
    "6-8 c: cccmvcch"sv,
    "16-17 l: bxnlvbvwzvfvbcmxl"sv,
    "7-12 c: cccccccccccc"sv,
    "6-7 b: bbbbjsjbbbs"sv,
    "2-7 q: phxnfxqrqv"sv,
    "4-5 h: hhhhhh"sv,
    "9-15 n: nqnnglsjnnghxrn"sv,
    "3-4 h: hkkh"sv,
    "5-11 r: rlsjvrrrrrl"sv,
    "5-7 b: bbbbzbwbbbb"sv,
    "2-3 f: qczff"sv,
    "8-14 c: fccqccccccclccccck"sv,
    "1-8 r: rrbfmjsr"sv,
    "4-5 p: dpphz"sv,
    "11-13 d: wdmwkcqddrdvdz"sv,
    "8-15 h: hhhhhhhhhhhhhhhhh"sv,
    "6-10 l: dhgdclhlkltnc"sv,
    "14-15 t: tttntttnthtttzw"sv,
    "4-6 p: pppppdp"sv,
    "13-14 l: dvlnvlgtbpnhll"sv,
    "11-12 s: brsqgfsnpmwskhdnm"sv,
    "6-7 j: httjvjj"sv,
    "2-14 w: wwwfwjzwrzfwnwjwwm"sv,
    "8-9 w: wwrwwwwgt"sv,
    "2-5 r: dvrwb"sv,
    "7-9 b: wwvqbsbjb"sv,
    "1-12 l: lljxlbslwlgn"sv,
    "11-12 m: mmmmmmhmmmwbmkmmt"sv,
    "10-11 l: lblllmllldl"sv,
    "3-9 w: wwpwwwwbfwwwm"sv,
    "9-10 q: pcrqfqlskz"sv,
    "7-9 l: llvlllblklllx"sv,
    "6-7 g: qgggjmwg"sv,
    "5-10 v: vvvvvxbrvvp"sv,
    "9-10 d: hqddgkkdrpdd"sv,
    "17-18 q: qqqqqqqlqqqqqqqqdt"sv,
    "6-10 h: hspnhhzldxphdh"sv,
    "8-13 l: vvvscdnlblllml"sv,
    "6-12 p: ppkrprpxwpppwx"sv,
    "4-5 k: tkslb"sv,
    "7-8 d: hdjdhnzdd"sv,
    "9-10 x: wkxtblgxxjxxlqnfxxlx"sv,
    "8-9 g: rggggggdk"sv,
    "10-20 d: kcgdtbbswwdtvgdgxfwd"sv,
    "3-4 g: gggggg"sv,
    "16-17 l: llnzlqllllzllllmllll"sv,
    "4-10 r: nsrrrbzrfzcrrzrrdqk"sv,
    "4-6 k: kkkkkpkk"sv,
    "4-8 n: nnnmntnnrnnn"sv,
    "12-14 l: lllllllllwlqllll"sv,
    "3-6 r: rrrrrrr"sv,
    "1-6 s: ssskcshsxtd"sv,
    "7-15 d: ndrbdnntdmkddxd"sv,
    "9-10 j: pjjjjgjsjhjj"sv,
    "7-10 k: pkbkkkkkgkq"sv,
    "4-8 m: mmxmmmdmmmmm"sv,
    "9-13 c: ngjcrcccvbcvqdjmph"sv,
    "3-5 q: qqqqqq"sv,
    "7-10 s: fcssnsssssslxspr"sv,
    "3-5 k: kkkkvv"sv,
    "5-10 f: tlbcvgwfzlf"sv,
    "5-9 x: xxxxqxxxx"sv,
    "2-10 q: qrprhbrhjhb"sv,
    "3-4 g: gggmgg"sv,
    "8-10 j: jjjjjjjgjpjjj"sv,
    "2-4 v: dvzvvtfm"sv,
    "7-12 q: zvzqprjhqdcqfzr"sv,
    "12-13 f: ffffffffffffqf"sv,
    "2-3 f: fffsdwq"sv,
    "10-11 z: ztzzjzjzzzlzzz"sv,
    "5-7 k: kkkkqtkkkkk"sv,
    "6-9 z: dfbzhgsrzsp"sv,
    "2-4 b: wpqb"sv,
    "9-15 c: cwchcdhxlqzccxbb"sv,
    "8-11 q: qqxptqqvqrgqg"sv,
    "5-7 t: ttttztcvtjtkts"sv,
    "2-6 n: nnbmdnjxclwkffrnxff"sv,
    "3-7 p: pppppph"sv,
    "9-12 d: xhmfndzcddfddvgddf"sv,
    "1-5 h: hthmhvlthhhhh"sv,
    "6-7 m: mmmmmmm"sv,
    "6-7 j: jjjvjjjrj"sv,
    "1-5 q: mqnqwqqqqqjq"sv,
    "10-11 b: bmbbbdbpbbbbzbb"sv,
    "1-4 k: gvccvdltkwcdd"sv,
    "12-16 s: sssssssssssjssshs"sv,
    "4-10 k: wzvlkmdhcklhdp"sv,
    "10-13 z: zzzzzzzzzfzzj"sv,
    "6-12 g: bmzmvvggpgtm"sv,
    "3-11 m: nvcpfgvnsqmwxmmz"sv,
    "1-5 n: dnwnnnnnnnbndnnn"sv,
    "4-5 h: lhhhh"sv,
    "4-5 g: gggdg"sv,
    "2-5 h: xthqhfj"sv,
    "2-4 f: lfkf"sv,
    "4-6 k: rqbhrtzktmvmrxck"sv,
    "4-5 q: jqdsc"sv,
    "10-11 h: hhhhhhhhhvjh"sv,
    "2-17 r: rrrrrrrprwrrrfjrr"sv,
    "16-17 b: bbbbbbbbbbbbbbbbhbbb"sv,
    "3-5 z: pkvzzfrljrjctw"sv,
    "13-14 w: wwwwwwwjwwwwww"sv,
    "8-10 d: dddddddldzpq"sv,
    "1-4 b: sbbgb"sv,
    "2-10 d: vnhpzmvpcddhs"sv,
    "8-15 t: zftpwtrtqjqtfntp"sv,
    "11-12 j: djjjjjjjcjjcj"sv,
    "4-7 r: jrrtrrrvmzzrrvsl"sv,
    "2-4 r: rpkp"sv,
    "3-4 b: qbxc"sv,
    "10-11 w: wwwwwwfzkdmnwwv"sv,
    "6-14 z: mztxzzztmzwzzqvm"sv,
    "12-14 w: wwwwwwmsgwdwsqwjwww"sv,
    "6-10 f: zfhqjfhnjfdvwsfftf"sv,
    "2-11 q: mwbbqdncdfq"sv,
    "8-11 v: zvtvvwvfvvq"sv,
    "6-8 n: xnwhzmdskwhn"sv,
    "8-15 q: qqqqkqqqqqqqqqst"sv,
    "1-4 n: nnnnn"sv,
    "5-18 c: sqczchcwcccclccccccc"sv,
    "3-4 j: klgr"sv,
    "11-12 m: mmmmmmmmmmmm"sv,
    "2-3 d: qdxfmqwbmdnvj"sv,
    "1-5 m: cmmmm"sv,
    "6-7 l: llllllll"sv,
    "1-9 m: zmmmmmmmlmmmmmmm"sv,
    "9-11 m: dwspwrmjsxpc"sv,
    "5-6 p: qpppfz"sv,
    "10-19 t: fvtphwzsptqzntbkxqt"sv,
    "7-9 m: mpcmpmmmvptmm"sv,
    "3-9 h: hhhpqqwhhtm"sv,
    "11-16 p: pppppppppppppppvp"sv,
    "1-9 k: ktkklkkkkkkk"sv,
    "10-17 q: rthtqvgspqkvfkgkqfhj"sv,
    "11-14 g: ggxgggggxggzggcnggg"sv,
    "3-4 t: tttt"sv,
    "9-10 t: sqtbdttthtttm"sv,
    "1-4 t: ttkbgdzztbxd"sv,
    "3-8 f: gxfcrrsfntftvffnfqff"sv,
    "9-11 q: qqqqqqqjlqqq"sv,
    "12-13 v: vvvvvvvvvvvvk"sv,
    "7-11 b: nbxbbbsmbtkb"sv,
    "7-8 k: kkkkkknn"sv,
    "4-6 j: jjjjlv"sv,
    "13-16 m: mmcmmmmmmmmmmmmvs"sv,
    "7-9 k: kdkkkkrkgkk"sv,
    "1-4 c: crcdlrdbzc"sv,
    "1-16 k: kkkkkkkkkkgmkkktkkk"sv,
    "2-12 l: llllrlllllllll"sv,
    "4-9 g: gggbkgpgz"sv,
    "6-7 q: qqqqqqjq"sv,
    "6-7 v: hvvvvpm"sv,
    "10-14 t: ttfxmqtgtttttbtct"sv,
    "5-7 h: hwhhfrnch"sv,
    "4-13 w: zdlrqvxwwzsfrfq"sv,
    "4-5 h: hhhshhhh"sv,
    "2-4 n: vhjfnz"sv,
    "5-6 s: sssssss"sv,
    "11-13 n: nnwrnnnlnngnn"sv,
    "3-4 s: wbss"sv,
    "3-4 s: wnss"sv,
    "16-17 p: ppfprptkpmzkbjppp"sv,
    "2-4 v: pvxv"sv,
    "8-9 w: swwwwwwhwwnwwwxj"sv,
    "4-6 s: pzhkvss"sv,
    "4-5 x: wnxpx"sv,
    "4-5 f: fsfwp"sv,
    "4-5 z: zzdjz"sv,
    "3-6 v: vnvvvvvvvvvvv"sv,
    "5-6 f: wfxfff"sv,
    "4-7 z: zzzqfzz"sv,
    "3-5 q: qqjqsqqqf"sv,
    "3-7 w: kwwkmww"sv,
    "6-7 h: hhhhhhgh"sv,
    "2-5 v: vvbzvvkn"sv,
    "8-15 r: svrqpqrgrrhmzbms"sv,
    "9-17 n: jnnnncnnnnnxnnnnnp"sv,
    "5-6 n: dgnhsc"sv,
    "5-7 l: lplltbv"sv,
    "4-6 n: mmrnsbcqr"sv,
    "7-8 w: wwjwwwwww"sv,
    "1-16 c: bccccccfcccccccdcc"sv,
    "6-9 l: sjnlmxwllg"sv,
    "3-9 q: cqvhkwhtstwrl"sv,
    "5-9 h: khvxhhhgfchhknhhhz"sv,
    "8-9 c: ccccccccdc"sv,
    "2-19 n: jjxbmbwmnqbblfbgzsz"sv,
    "3-4 p: pppp"sv,
    "1-3 b: jzxbbb"sv,
    "3-6 h: hhhgjhhw"sv,
    "2-8 f: vfxftzkmlzk"sv,
    "11-19 h: mmdptdzhwdbjhvkccrhk"sv,
    "4-14 s: sssvsdpsssssspns"sv,
    "11-12 f: fffffffflfbk"sv,
    "2-13 h: nhbgtbjvbpmrnhf"sv,
    "1-3 t: ttttttttttttttttttm"sv,
    "3-4 t: tsttr"sv,
    "2-9 n: fnkknptqn"sv,
    "1-8 j: qjpjjjjjjtpxjqjw"sv,
    "2-12 c: clccccccccckccc"sv,
    "18-19 f: dpftffzcfhqffddfpff"sv,
    "1-4 j: trjj"sv,
    "9-11 z: zwzmzzczsdd"sv,
    "5-8 g: vrpbggfn"sv,
    "2-5 k: qksvzkj"sv,
    "2-4 f: wfdfjlfwmjrdmxx"sv,
    "4-12 l: bnplnlgqcwql"sv,
    "13-14 n: nqlfdnnnnnnnvbnwnlh"sv,
    "4-8 l: dgxhsrql"sv,
    "10-11 k: qvwcrkxtkjxlq"sv,
    "5-6 g: ckgggg"sv,
    "6-14 h: xbhhvzvxbhhhhhbhkzhh"sv,
    "6-9 w: whwdwrxgc"sv,
    "7-9 b: bbrbnjbfb"sv,
    "7-8 w: brwwkfvwwwww"sv,
    "2-11 g: gmggghngggg"sv,
    "12-17 l: bgslljzntbmvtkbgllgg"sv,
    "12-18 g: gggggggggggkggggggg"sv,
    "1-3 l: gllllllll"sv,
    "14-16 k: jkkqkkgkrkvxkkkkskgb"sv,
    "2-3 v: vljvgnvm"sv,
    "7-8 r: jrjvrprr"sv,
    "7-8 f: xxffrnff"sv,
    "2-18 j: jhjjjjjjjjjtjjfjjpjr"sv,
    "8-9 q: rfllhmnqtrkv"sv,
    "2-3 n: lnndv"sv,
    "2-15 s: hzzsrprnnjlwdfs"sv,
    "1-5 q: vqqqq"sv,
    "9-18 b: gxbpbbppbrbbnlkmbb"sv,
    "2-13 b: bbbbbbbbbbbbpb"sv,
    "6-7 t: mtrftthtttftttztttst"sv,
    "1-7 z: nfzzzzvzzczzzzzzzz"sv,
    "4-12 m: mmmcmmmmmmmmmm"sv,
    "9-11 p: jpswppqbmpfpzpg"sv,
    "10-11 c: ccccccpcccc"sv,
    "2-6 t: ztscdrkxxctdft"sv,
    "3-13 q: mqfqqqqjqqfqdqqq"sv,
    "16-20 z: zzjcxdmzgzzzppbtztzz"sv,
    "5-15 w: wwwpwhwqcwwwwwgw"sv,
    "2-4 p: pczp"sv,
    "5-7 d: ddddmdfd"sv,
    "2-3 f: fftc"sv,
    "1-3 v: vvmv"sv,
    "11-15 k: tjkcvkkkkgkzkkxqv"sv,
    "4-6 b: vdkvbn"sv,
    "7-8 c: wbcjhswc"sv,
    "9-10 l: lllbqrllll"sv,
    "4-5 s: sjnlw"sv,
    "12-14 j: mjtmzfjjtsgvgtq"sv,
    "1-3 l: llrllml"sv,
    "12-13 d: dngddlqdtgdcd"sv,
    "3-5 l: cblhld"sv,
    "3-4 r: trrq"sv,
    "1-3 c: kcccc"sv,
    "9-10 g: bgbgjggpvgpgpggg"sv,
    "3-6 d: szwlfm"sv,
    "13-14 f: ffffffffffffzfff"sv,
    "6-7 d: ddddddddddnnddddr"sv,
    "7-16 h: xmbpwmhsznmldhnxflc"sv,
    "4-6 q: qqqnqqqg"sv,
    "2-7 t: ttwbpmnthmjr"sv,
    "8-16 x: xbcxxbwxxrpxnfxd"sv,
    "2-3 d: dngdd"sv,
    "9-10 n: qkxfdljnnl"sv,
    "4-5 f: ftfffff"sv,
    "12-15 n: nnnnnncnnnnnnnsnn"sv,
    "1-2 d: dkdd"sv,
    "2-5 v: vvvvgv"sv,
    "1-14 v: jvvvvvvvvvvvvmvvv"sv,
    "5-6 r: rrrrrr"sv,
    "2-3 b: bnvbbbtbjgxfchnkhcjb"sv,
    "1-14 g: wjggxgggggggxgmrvcg"sv,
    "1-6 x: bhvxhxxxx"sv,
    "1-2 r: rprr"sv,
    "6-7 c: cccccccqc"sv,
    "4-8 b: bbgplbbcdtbbdbgbbhbz"sv,
    "1-4 w: wjgw"sv,
    "1-3 h: zhzzt"sv,
    "2-11 j: sjjrtjkjhjj"sv,
    "6-7 m: mlmrrmm"sv
};