- git commit: Lưu lại nội dung hoặc những thay đổi của tất cả 
những gì đã làm được trước khi chuyển sang thực hiện công việc
khác có thể là thực hiện một commit mới, chuyển sang một branch
khác mục đích là để ta có thể truy xuất lại được nội dung của 
những file đó khi cần thiết.
- git add: Khi file vừa được thêm vào thư mục nó sẽ ở trạng
thái untracked(không xác định) phải dùng git add để xác định
file đó, một file vừa bị thay đổi nội dung cũng cần phải add
lại để cập nhật lại nổi dung sau đó mới commit đẻ lưu lại
nhưng thay đổi đó.
- git log: xem lịch sử của các commit đã được tạo.
- git show + <ID commit>: xem được lịch sử commit và những thay
đổi trong commit đó.
- git diff: xem nội dung thay đổi của nhưng file bị modify.
- git remote add <remote name> <link>: Liên kết git với github
qua link.
- git push -u origin master: Sử dụng khi lần đầu push lên github
, dùng để push branch master lên github.
- git checkout -- <file name>: Xóa những thay đổi của file khi
file chưa được add(hay cập nhật).
- git reset: Đưa một file đã được add (cập nhật) trở lại working
dir.
- Branch: Là các nhánh làm việc trong git. Khi làm việc
trên một dự án sẽ có rất nhiều nhiệm vụ, mỗi nhiệm vụ sẽ được
làm việc trên một branch khác nhau, các hoạt động trên branch
này sẽ không ảnh hưởng gì đến branch khác. Khi branch này hoạt
động ổn định rồi thì mới merge vào branch master.
- .gitignore: Liệt kê những file không muốn cho vào git, nhưng
file không muốn cho vào git như:
    + Các file do IDE tự sinh ra trong quá trình tự build project
    + Các file cấu hình đường dẫn của máy cá nhân -> Gây ra 
việc không build được project khi checkout về ở các máy thành viên khác
